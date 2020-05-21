#include<iostream>
using namespace std;

int merge(int a[], int start, int end, int mid) {
    int i = start, j = mid, k = 0, inversion_count = 0;
    int temp[end-start+1];
    while(i < mid && j <= end) {
        if(a[i]<=a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
            inversion_count += mid - i;
        }
    }
    while(i<mid) {
        temp[k++] = a[i++];
    }
    while(j<=end) {
        temp[k++] = a[j++];
    }

    for(int i = start, k=0; i<=end; i++, k++) {
        a[i] = temp[k];
    }
    return inversion_count;
}

int mergesort(int a[], int start, int end) {
    if (start < end) {
        int mid = (start + end)/2;
        int count1 = mergesort(a, start, mid);
        int count2 = mergesort(a, mid+1, end);
        int count3 = merge(a, start, end, mid+1);
        return count1 + count2 + count3;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    cout << mergesort(a, 0, n-1) << endl;
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

