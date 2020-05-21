#include<iostream>
using namespace std;

int main()
{
    int n=0;
    cin >> n;
    int a[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            cin >> a[i][j];
    }
    
    int sum = 0;
    int j = 0;
    for (int i=0; i<n; i++) {
        for (int j=0;j<n;j++){
            if (i==0||j==0||i==n-1||j==n-1){
                sum += a[i][j];
            }
        }
    }
   
    cout << sum;
    for (int i=0; i<n; i++) {
        if ((i!= 0)&&(i!=n-1)) {
            sum += a[i][n-i-1];
            sum += a[i][i];
        }
    }
    
    if (n%2!=0) {
        sum -= a[n/2][n/2];
    }
    
    printf("%d", sum);
    
	return 0;
}
