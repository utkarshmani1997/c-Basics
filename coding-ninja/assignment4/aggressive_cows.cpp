#include<iostream>
#include<algorithm>
using namespace std;

bool check(long long int pos[], int stalls,long long int distance, int no_of_cows) {
    int last_index = pos[0], count = 1;
    for(int i = 1; i < stalls; i++) {
        if(pos[i]-last_index >= distance) {
            count++;
            last_index = pos[i];
            if (no_of_cows == count)
                return true;
        }
    }
    return false;
}

int main() {

	// Write your code here
    int n;
    cin >> n;
    while(n--) {
        int stalls = 0;
        int cows = 0;
        cin >> stalls >> cows;
        long long int positions[stalls];
        for(int i=0; i<stalls; i++) {
            cin >> positions[i];
        }
        sort(positions, positions+stalls);
        long long int min_distance = 0, max_distance = positions[stalls-1] - positions[0], pos = 0;
        while(max_distance >= min_distance) {
            long long int mid = min_distance + (max_distance-min_distance)/2;
            if (check(positions, stalls, mid, cows)) {
                min_distance = mid+1;
                pos = mid;
            } else {
                max_distance = mid-1;
            }
        }
        cout << pos << endl;
    }
    return 0;
}
