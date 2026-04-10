#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){ // Recursion kullanılmadan
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2; 
        cout << "Mid point: " << arr[mid] << endl;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int recBinarySearch(int arr[], int low, int high, int target){ // Recursion kullanılarak
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == target)
        return mid;
    else if (target > arr[mid])
        return recBinarySearch(arr, mid + 1, high, target);
    else
        return recBinarySearch(arr, low, mid - 1, target);
    
}

void sortArray(int arr[], int size){
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {

    int arr[10] = {-23, -15, -7, 0, 8, 13, 34, 42, 56, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, size);
    cout << binarySearch(arr,size, 13) << endl;
    cout << recBinarySearch(arr, 0, size-1, 13);

    return 0;
}
