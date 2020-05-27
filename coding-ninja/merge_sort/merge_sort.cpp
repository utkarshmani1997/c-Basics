#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    int temp[end-start+1];
    int i = start, j = mid, k = 0;
    while(i<mid && j<=end) {
        if (arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while(i<mid) {
        temp[k++] = arr[i++];
    }

    while(j<=end) {
        temp[k++] = arr[j++];
    }

    for(int i=start, k = 0; i<=end; i++, k++) {
        arr[i] = temp[k];
    }

}

void merge_sort(int arr[], int start, int end) {
    if (start<end) {
        int mid = start + ((end-start)/2);
        merge_sort(arr, start, mid);
        merge_sort(arr, mid+1, end);
        merge(arr, start, mid+1, end);
    }
}


int main() {

    int arr[10] = {1, 13, 2, 10 ,8, 7, 11, 12 ,5, 6};
    merge_sort(arr, 0, 9);
    for(int i=0; i<10; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}

