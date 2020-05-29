#include <iostream>
using namespace std;

int subsequence(string input, string output[]) {
    if(input.empty()) {
        output[0] = "";
        return 1;
    }

    string substring = input.substr(1);
    int len = subsequence(substring, output);
    for(int i = 0; i<len; i++) {
        output[i+len] = input[0] + output[i];
    }
    return 2*len;
}

int main() {
    string str = "abc";
    string *output = new string[1000];
    int len = subsequence(str, output);
    for(int i=0; i<len; i++) {
        cout << output[i] << endl;
    }
    return 0;
}
