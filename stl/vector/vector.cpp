#include <iostream>
#include <vector>

using namespace std;

int main() {

    // vector is a dynamic array
    // even if you don't give it's size
    // it will work.
    vector<int> v(5);
    vector<int>::iterator it;

    for(int i=0; i<5; i++) {
        //v[i] = i;  // only work if vector's size is already allocated
        v.push_back(i); // increase the size of array dynamically and add the element at the back
    }
/*
    for(it=v.begin();it!=v.end();it++)
        cin >> *it;
*/
    for(it=v.begin();it!=v.end();it++)
        cout << *it << endl;

    return 0;
}
