#include<bits/stdc++.h>
#include<map>
#include <string>

using namespace std;
int main()
{
    map<char,int> frequency;
    int n=0;
    string s;
    cin >> n >> s;
    for (int i=0; i<n; i++) {
        if (s[i] == 'a' || s[i] == 's' || s[i] == 'p') {
            frequency[s[i]]++;
        }
    }
    
    cout << frequency['a'] << " " << frequency['s'] << " " << frequency['p'] << endl;
	return 0;
}
