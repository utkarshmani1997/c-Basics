#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

void triplet(int arr[], int size) {
    for(int i=0; i<size-2; i++){
        for(int j=i+1; j<size-1; j++) {
            for(int k=j+1; k<size; k++){
                cout << "{" << arr[i] << "," << arr[j] << "," << arr[k] << "}" << endl;
            }
        }
    }
}

void FindTriplet(int arr[], int size, int x) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    sort(arr, arr+size);
    set<int> s;
    for(int i=0; i<size;i++) {
        s.insert(arr[i]);
    }
   

    for(int i=0; i<size-2; i++) {
        for(int j=i+1; j<size; j++) {
            if(s.find(x-arr[i]-arr[j]) != s.end()) {
                set<int> s1;
                s1.insert(arr[i]);
                s1.insert(arr[j]);
                s1.insert(x-arr[i]-arr[j]);
                set<int>::iterator it;
                for(it=s1.begin(); it!=s1.end();){
                    cout << *it << "";
                    advance(it, 1);
                    cout << *it << "";
                    advance(it, 1);
                    cout << *it << endl;
                }
            }
        }
    }
}
int main() {
    int n=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++) {
        cin >> arr[i];
    }
    FindTriplet(arr, n, 66);
    return 0;
}

