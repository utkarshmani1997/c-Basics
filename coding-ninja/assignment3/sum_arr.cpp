#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    int n = 0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    for (int i=0; i<n; i++) {
        int sum = 0;
        while(a[i] >= 0) {
            sum += a[i]%10;
            a[i] = a[i]/10;
        }
        cout << sum << endl;
    }
}
