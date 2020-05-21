#include<map>
#include<iostream>

using namespace std;
char* uniqueChar(char *str){
    // Write your code here
    map<char,int> characters;
    int pos = 0;
    while(*str != '\0') {
        if (characters.find(*str) == characters.end()) {
            characters[*str] = pos;
            pos++;
            //cout << *str << endl;
        }   
        str++;
    }
	
    char *arr = new char[characters.size()+1];
    map<char,int>::iterator it;
	for(it=characters.begin(); it!=characters.end(); it++) {
        arr[it->second]=it->first;
        //cout << it->first << " " << it->second << endl;
    }
    
    arr[characters.size()] = '\0';
    for (int i=0; i<=characters.size(); i++) {
        if (arr[i] == '\0') {
            for (int j=i; j<=characters.size(); j++) {
                arr[j] = arr[j+1];
             //   cout<<arr[j]<<endl;
            }
        }
    }
    
    return arr;
}

int main() {
    char str[] = "agagagbgsgsgsgbgugigbgagugsgbgcgkglgagjgbgsgdgc";
    cout << uniqueChar(str);
}
