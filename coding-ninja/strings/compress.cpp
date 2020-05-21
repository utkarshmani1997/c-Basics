#include <iostream>
using namespace std;

void stringCompression(char input[]) {
    // Write your code here
    char *s = input;
    char *cur, *next;
    while (*s) {
        int count = 1;
        while ((*s == *(s+1))&&*s) {
            count++;
            s++;
        }
        
        if (count > 1) {
            // update the next repeated consecutive location with
            //  count and shift the array
            *(s-count+2) = '0' + count;
            for (int i=0; i<count-2; i++) {
                next = s + 1;
                cur = s;
                while(*cur) {
                    *cur++ = *next++;
                }
                s--;
            }
        }
        s++;
    }
    cout << input;
}

void stringCompression2(char input[]) {
    // Write your code here
    char *s = input;
    char *cur, *nextloc;
    while (*s) {
        int count = 1;
        while ((*s == *(s+1))&&*s) {
            count++;
            s++;
        }
        
        if (count > 1) {
            // update the next repeated consecutive location with
            //  count and shift the array
            *(s-count+2) = '0' + count;
            nextloc = s+1;
            cur = s-count+2+1;
            s = cur;
            while(*s) {
                *s = *nextloc;
                nextloc++;
                s++;
            }
            s = cur;
        } else {
            s++;
        }
    }
    cout << input;
}

int main() {
    char input[] = "aaaaabbbbcccd";
    stringCompression2(input);
}
