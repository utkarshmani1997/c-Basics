#include<iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){
	//Your Code goes here
    vector<int> v;
    unordered_set<int> s;
    
    int max_count = 0;
    int start_elem = 0;
    for(int i=0; i<n; i++) {
        s.insert(arr[i]);
    }
    
    for (int i=0; i<n; i++) {
        if(s.find(arr[i]-1) == s.end()) {
            int j = arr[i];
            int count = 0;
            while(s.find(j) != s.end()){
                j++;
                count++;
            }
            if (count>max_count) {
                max_count = count;
                start_elem = arr[i];
            }
            if (max_count == 1) {
                start_elem = arr[0];
            }
        }
    }
    
    for (int i=0; i<max_count; i++) {
        v.push_back(start_elem+i);
    }
    return v;
}

int main() {
    vector<int> v;
    vector<int>::iterator it;
    int arr[] = {5, 6, 8, 9, 10, 12, 15, 16, 17, 18, 20, 22, 23};
    v = longestConsecutiveIncreasingSequence(arr,1);
    for(it=v.begin(); it !=v.end(); it++) {
        cout << *it;
    }
    return 0;
}

