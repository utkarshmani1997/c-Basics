#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;
int main()
{
    unordered_map<string,int> students;
    string names;

    while (cin>>names) {
        students[names]++;
    }
   
    int more_than_once = 0;
    unordered_map<string,int>::iterator it;
    for (it=students.begin(); it!=students.end(); it++) {
        if (it->second != 1) {
            more_than_once = 1;
        } 
    }

    if (more_than_once == 1) {
        for (it=students.begin(); it!=students.end(); it++) {
            if (it->second != 1) { 
                cout << it->first << " " << it->second << endl;
            }
        }
    } else {
        cout << -1 << endl;
    }
	return 0;
}
