#include<iostream>
#include<map>

using namespace std;

int main() {

    // implemented using BST and it's ordered map
    map<char,int> m;
    char *arr = new char[4096];
    cin>>arr;

    while(*arr != '\0'){
        m[*arr]++;
        arr++;
    }

    map<char,int>::iterator it;
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
