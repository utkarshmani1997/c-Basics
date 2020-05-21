#include <iostream>
#include <set>
using namespace std;

int main() {
    
    // set is implemented using balanced binary tree
    // time taken to insert an element is log(n)
    set<int> s;
    int arr[] = {7, 8, 4, 5, 6, 5};

    for(int i=0; i<7; i++) {
        s.insert(arr[i]);
    }

    set<int>::iterator it;
    for(it=s.begin(); it != s.end(); it++){
        cout << *it << endl;
    }

    // if element does not exist iterator in find points to the last index
    if (s.find(17) == s.end()) {
        cout << "Element not found" << endl;
        return 0;
    }

    cout << "Element found" << endl;
    return 0;
}
