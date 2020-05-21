#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<map>

using namespace std;
int main()
{
    map<string,int> students;
    string names;
    string del = " ";
    getline(cin, names);
    size_t pos = names.find(del);
    while ((pos = names.find(del)) != string::npos) {
        students[names.substr(0, pos)]++;
        //cout << names.substr(0, pos) << endl;
        names.erase(0,pos + del.length());
    }

    // last name is ignored
    students[names.substr(0)]++;
   
    int more_than_once = 0;
    map<string,int>::iterator it;
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
