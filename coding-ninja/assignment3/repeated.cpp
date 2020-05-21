#include <iostream>
#include <set>
using namespace std;

// generic case with space complexity of O(n)
// time complexity of O(nlogn)
int Duplicate(int arr[], int size) {
    set<int> s;
    for(int i=0; i<size; i++) {
        if (s.find(arr[i]) == s.end()) {
            s.insert(arr[i]);
        } else {
            return arr[i];
        }
    }
}

// special case, sum of n-2 natural numbers
// O(n)
int duplicate(int arr[], int size) {
    // sum of n-2 numbers
    int sum = (((size-2) * (size-2+1))/2);
    int sum_of_elements = 0;
    for(int i=0; i<size; i++) {
        sum_of_elements += arr[i];
    }
    return sum_of_elements - sum;
}

int main() {
    
    // sum of n natural numbers with 1 duplicate
    int arr[] = {1, 2, 3, 4, 5, 6, 5};
    cout << Duplicate(arr, 7) << endl;
    return 0;
}
