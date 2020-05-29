#include<iostream>
using namespace std;

// first element as pivot
int partition(int arr[], int start, int end) {
    int pivot = arr[start]; // take first element as pivot
    int greater_element_position = start + 1;
    for (int i=start+1; i<=end; i++) {
        if (pivot > arr[i]) {
            swap(arr[i], arr[greater_element_position]);
            greater_element_position++;
        }
    }
    swap(arr[greater_element_position-1], arr[start]);
    return greater_element_position - 1;
}

// last element as pivot
int partition2(int arr[], int start, int end) {
    int pivot = arr[end]; // take last element as pivot
    int greater_element_position = end - 1;
    for (int i=end-1; i>=start; i--) {
        if (pivot < arr[i]) {
            swap(arr[i], arr[greater_element_position]);
            greater_element_position--;
        }
    }
    swap(arr[greater_element_position+1], arr[end]);
    return greater_element_position+1;
}


void sort(int arr[], int start, int end) {
    if (start<end) {
        int position = partition2(arr, start, end);
        sort(arr, start, position-1);
        sort(arr, position+1, end);
    }
}

void quickSort(int arr[], int size) {
    sort(arr, 0, size-1);
}

int main() {
    int arr[] = {5, 9, 3, 8, 7, 2, 4, 1};
    quickSort(arr, 8);
    for (int i = 0; i < 8; i++)
        cout << arr[i] << endl;
    return 0;
}
