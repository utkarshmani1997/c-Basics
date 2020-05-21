#include <iostream>
using namespace std;

void change(char arr[]) {
    char *s = arr;
    while(*s != '\0') {
        //cout << s;
        *s = *s+1;
        s++;
    }
}

int main() {
    char a[] = "xyz";
    char *b = a;
    change(a);
    cout << a;
    return 0;
}
