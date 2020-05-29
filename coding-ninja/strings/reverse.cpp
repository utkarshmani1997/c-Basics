#include <iostream>
using namespace std;

int set(string str, string output[]) {
    if(str.empty()) {
        return 0;
    }

    string subs = str.substr(1);
    int len = set(subs, output);
    output[len] = str[0];
    return len+1;
}

int main() {
    string str = "abc";
    string *output = new string[10];
    int len = set(str, output);
    for(int i=0; i<len; i++) {
        cout << output[i] << endl;
    }
}
