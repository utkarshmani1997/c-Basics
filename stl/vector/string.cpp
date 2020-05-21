#include <iostream>
#include <string>

using namespace std;

int main() {

    string s = "Utkarsh";
    string s1(s, 2, 4);
    cout << "s: " << s << ",s1: " << s1 << endl;
    if (s.compare(s1) == 0) {
        cout << "equal" << endl;
    } else {
        cout << "not equal" << endl;
    }

    cout << "length s: " << s.length() << "length s1: "  << s1.length();
    return 0;
}
