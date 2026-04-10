#include <iostream>
using namespace std;

void printArr(int* arr, int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort(int arr[], int n){
    int k = 1;
    int number, j;
    for (int i = 1; i < n; i++)
    {
        number = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > number)       // 8, 7, 2, 3, 5, 1, 9
        {

            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = number;
        cout << "Step " << k++ << ": ";
        printArr(arr, n);
    }
    
}


int main() {
    int arr[6] = {8, 4, 5, 2, 7, 3};
    sort(arr, 6);
    return 0;
}

