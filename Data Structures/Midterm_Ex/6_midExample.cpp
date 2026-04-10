#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    int temp, min;

    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    
}

void printArr(const int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {5,3,4,2,6,1,7,10,8,9};
    selectionSort(arr, 10);
    cout << "Sorted array: ";
    printArr(arr, 10);;
    return 0;
}