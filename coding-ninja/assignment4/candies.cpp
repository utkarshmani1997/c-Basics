#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {

	// Write your code here
    int test = 0;
    cin >> test;
    while(test--) {
        int n = 0, k = 0;
        cin >> n >> k;
        long long int candies[n];
        for(int i=0; i<n; i++) {
            cin >> candies[i];
        }
        sort(candies, candies+n, greater<long long int>());
        for (int i = 0; i<n; i++) {
            if ((candies[i]/k) == 0) {
                cout << candies[i]/k << endl;
                break;
            }
        }
    }
}
