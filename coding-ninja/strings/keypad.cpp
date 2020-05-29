#include <iostream>
using namespace std;

string keystrokes[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int code(string keystrokes, string output[]) {
    if (keystrokes.empty()) {
        output[0] = "";
        return 0;
    }

    string subs = keystrokes.substr(1);
    int len = code(subs, output);
    output[len] = keystrokes[0];
    return len+1;
}

int keypad(int num, string output[]) {
    int remainder = 0, len = 0;
    if (num == 0) {
        output[0] = "";
        return 1;
    }
    remainder = num % 10;
    num = num / 10;
    len = keypad(num, output);
    string temp[len];
    for (int l = 0; l < len; l++) {
        temp[l] = output[l];
    }
    for (int i = 0, k = 0; i<len; i++) {
        for (int j = 0; j<keystrokes[remainder].size(); j++) {
            output[k++] = temp[i] + keystrokes[remainder][j];
        }
    }

    return len*keystrokes[remainder].size();
}

int main() {
    int n = 0, len = 0;
    cin >> n;
    string *output = new string[1000];
    len = keypad(n, output);
    for(int i=0; i<len; i++) {
        cout << output[i] << endl;
    }
    return 0;
}
