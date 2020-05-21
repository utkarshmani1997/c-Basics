#include <iostream>
#include <set>
using namespace std;

char* uniqueChar(char *str){
    // Write your code here
    set<char> characters;
    while(str != '\0') {
        characters.insert(*str);
        str++;
    }
    
    char *arr = new char[1024];
    set<char>::iterator it;
    for(it=characters.begin(); it!=characters.end(); it++) {
        *arr = *it;
        arr++;
    }
    *arr = '\0';
    return arr;
}
int main() {
    
    // set is implemented using balanced binary tree
    // time taken to insert an element is log(n)
    set<char> s;
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'a', 'd', 'd', 'b', 'c'};

    for(int i=0; i<10; i++) {
        s.insert(arr[i]);
    }

    char *ar = uniqueChar(arr);
    while()
    return 0;
}
