#include <iostream>
using namespace std;

string keystrokes[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(int num, string output) {
    int remainder = 0, len = 0;
    if (num == 0) {
        cout << output << endl;
    }
    remainder = num % 10;
    num = num / 10;
    for(int i = 0; i < keystrokes[remainder].size(); i++) {
        keypad(num, keystrokes[remainder][i]+output);
    }
}

int main() {
    int n = 0, len = 0;
    cin >> n;
    string output;
    keypad(n, output);
    return 0;
}
