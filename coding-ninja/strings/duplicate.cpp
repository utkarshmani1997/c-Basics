#include<iostream>
using namespace std;
void removeConsecutiveDuplicates(char *input) {
	if (input[0] == '\0') {
        return;
    }
    
    if (input[0] == input[1]) {
        char *old = input+1;
        cout << old << endl;
        int i = 0;
        while(*old != '\0') {
            input[i] = *old;
            old++;
            i++;
        }
        input[i] = *old;
        removeConsecutiveDuplicates(input);
    } else {
        removeConsecutiveDuplicates(input+1);
    }

}
int main() {
    char arr[] = {'a', 'a', 'b', 'c', 'c'};
    removeConsecutiveDuplicates(arr); 
    cout << arr;
    return 0;
}

