#include <iostream>
#include <unordered_map>
using namespace std;

int FindUnique(int arr[], int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    unordered_map<int,int> count;
    for(int i=0; i<size; i++) {
        count[arr[i]]++;
    }
    
    unordered_map<int,int>::iterator it;
    for(it=count.begin();it !=count.end(); it++) {
        if (it->second == 1)
            return it->first;
    }
}

int main() {

    // implemented using HASH table
    // Avg case is O(1) in most of the cases
    // but O(n) in worst case.
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 5};
    cout << FindUnique(arr, 9);
    return 0;
}
