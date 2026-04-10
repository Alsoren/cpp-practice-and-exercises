#include <iostream>
using namespace std;

void printArr(int* arr, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insSort(int* arr, int size) {
    int k = 1;
    for (int i = 1; i < size; i++)
    {
        int number = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > number) { // arr[j] = sınır
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = number;
        cout << "Step " << k++ << ": ";
        printArr(arr, size);
    }
}


int main()
{
    int arr[7] = {7,3,2,1,5,6,4};
    sort(arr, 7);
    cout << "array: "; printArr(arr , 7);
    return 0;w
}