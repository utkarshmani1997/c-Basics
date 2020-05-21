#include <iostream>
#include <algorithm>
using namespace std;

struct Interval {
    int start;
    int end;
};

bool compare(Interval i1, Interval i2) {
    return i1.start < i2.start;
}

int main() {

    int arr[] = {1, 4, 5, 2, 3};
    // sort only the given interval
    sort(arr, arr+5);
    for(int i=0; i < 5; i++) {
        cout << arr[i] << " " << endl;
    }
    
//    // sort in decreasing order
//    sort(arr, arr+5, greater<int>());
//    for(int i=0; i < 5; i++) {
//        cout << arr[i] << " " << endl;
//    }


    Interval arr1[] = {{6, 4}, {3, 4}, {8, 6}, {8, 8}, {2, 1}};
    // sorting in custom order
    sort(arr1, arr1+5, compare);
    for(int i=0; i < 5; i++) {
        cout << arr1[i].start << " " << arr1[i].end << endl;
    }

    cout << endl;
    // both will print 0 since output is in decreasing order
    cout << binary_search(arr, arr+5, 5) << endl;
    cout << binary_search(arr, arr+5, 0) << endl;
    cout << lower_bound(arr, arr+5, 5)-arr << endl;
    return 0;
}
