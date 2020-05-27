#include <iostream>
#include <utility>
#include<vector>
using namespace std;

int main() {

    int x = 5;
    int y = 10;
    swap(x, y);
    vector<pair<int,int>> v;
    v.push_back(make_pair(2, 4));
    v.push_back(make_pair(5, 7));
    v.push_back(make_pair(9, 10));
    v.push_back(make_pair(11, 13));
    v.push_back(make_pair(14, 17));
    v.push_back(make_pair(20, 30));

    cout << x << " " << y << endl;
    cout << min(x, y) << endl;
    cout << lower_bound(v.begin(), v.end(), make_pair(2,0)) - v.begin() << endl;
    cout << v[6].first << " " << v[6].second;
    return 0;
}
