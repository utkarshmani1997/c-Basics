#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    // implemented using HASH table
    // Avg case is O(1) in most of the cases
    // but O(n) in worst case.
    unordered_map<int,int> m;
    for (int i=0; i<10; i++) {
        m[i] = i+1;
    }


    unordered_map<int,int>::iterator it;
    for(it=m.begin(); it !=m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    cout << endl;
    m.erase(1);
    for(it=m.begin(); it !=m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
 
    return 0;
}
