#include <iostream>
using namespace std;

void merge(int data[], int start, int mid, int end){
    int n = end - start + 1;
    int temp[n];
    int i = start, j = mid + 1, k = 0;

    while(i <= mid && j <= end){
        if (data[i] <= data[j]){
            temp[k++] = data[i++];
        } else{
            temp[k++] = data[j++];
        }
    }
    while(i <= mid){
        temp[k++] = data[i++];
    }
    while(j <= end){
        temp[k++] = data[j++];
    }
    for (i = start; i <= end; i++){
        data[i] = temp[i - start];
    }
    

}

void mergeSort(int data[], int start, int end){
    if (start < end){
        int mid = (start + end) / 2;
        mergeSort(data, start, mid);
        mergeSort(data, mid + 1, end);
        merge(data, start, mid, end);
    }
}


int main() {
    int arr[10] = {-23, -15, -7, 0, 8, 13, 34, 42, 56, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
