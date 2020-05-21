#include<bits/stdc++.h>
using namespace std;

long long int merge(int a[], int start, int end, int mid) {
    int i = start, j = mid, k = 0;
    long long int present_sum = 0;
    int temp[end-start+1];
    while(i<mid && j<=end) {
        if (a[i]<=a[j]){
            present_sum += a[i];
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }
    
    while(i<mid) {
        temp[k++] = a[i++];
    }
    
    while(j<=end) {
        temp[k++] = a[j++];
    }
    
    for(int i=start, k=0; i<=end; i++, k++) {
        a[i] = temp[k];
    }
    return present_sum;
}

long long int mergesort(int a[], int start, int end) {
    if (start < end) {
        int mid = (start+end)/2;
        long long int present_sum1 = mergesort(a, start, mid);
        long long int present_sum2 = mergesort(a, mid+1, end);
        long long int total_sum = merge(a, start, end, mid+1);
        return present_sum1 + present_sum2 + total_sum;
    }
    return 0;
}

int main() {

	// Write your code here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int num[n];
        for(int i=0; i<n; i++) {
            cin >> num[i];
        }
        /*
        naive approach
        long long int total_sum = 0;
        for(int i=1; i<n; i++) {
            long long int present_sum = 0;
            for(int j=0; j<i; j++) {
                if(num[j] < num[i]) {
                    present_sum += num[j];
                } 
            }
            total_sum += present_sum;
        }
        */
        
        cout << mergesort(num, 0, n-1) << endl;
        for (int i=0; i<n; i++) {
            cout << num[i] << " ";
        }
    }
}
