#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

struct student {
    char name[20];
    int rollno;
    int  ds;
    int  algo;
    int  os;
    int  total;
};

bool compare(student s1, student s2) {
    if (s1.total == s2.total) {
        return s1.rollno > s2.rollno;
    }
    return s1.total > s2.total;
}

int main()
{
    int n = 0;
    cin >> n;
    student stud[n];
    for (int i=0; i<n; i++) {
        stud[i].rollno = i+1;
        cin >> stud[i].name >> stud[i].ds >> stud[i].algo >> stud[i].os;
        stud[i].total = stud[i].ds + stud[i].algo + stud[i].os;
    }
    
    sort(stud, stud+n, compare);
    for (int i=1; i<=n; i++) {
        cout << i << " " << stud[i-1].name << endl;
    }
	return 0;
}
