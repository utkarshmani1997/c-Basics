#include <iostream>
using namespace std;
int main()
{
    int n;
    int maxsize = 10;
    cin >> n;
    if (n%2 !=0) {
        return 0;
    }
    int population[n];
    for (int i=0; i<n; i++) {
        cin >> population[i];
    }
    
    for (int i=0; i<=(n/2)-1; i++) {
        cout << (population[i]+population[n-i-1])/10 << " " << (population[i]+population[n-i-1])%10 << endl;
    }
	return 0;
}
