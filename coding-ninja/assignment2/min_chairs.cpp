#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {

	// Write your code here
    int n= 0;
    cin >> n;
    int arr[n], dep[n];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i<n; i++) {
        cin >> dep[i];
    }
    
    sort(arr, arr+n);
    sort(dep, dep+n);

    int i= 1;
    int j= 0;
    int chairs_needed = 1;
    int result = 1;
    while(i<n && j<n) {
        if(arr[i] <= dep[j]) {
            chairs_needed++;
            i++;
        } else if (arr[i] > dep[j]) {
            chairs_needed--;
            j++;
        }
        
        if (chairs_needed > result) {
            result = chairs_needed;
        }
    }
    
    cout << result;
    return 0;
}
