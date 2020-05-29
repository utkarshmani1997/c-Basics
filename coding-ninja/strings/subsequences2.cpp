#include <iostream>
using namespace std;

void subsequence(string input, string output) {
    if(input.empty()) {
        cout << output << endl;
        return;
    }
    subsequence(input.substr(1), output);
    subsequence(input.substr(1), output + input[0]);
}

int main() {
    string str = "abc";
    string output;
    subsequence(str, output);
    return 0;
}
