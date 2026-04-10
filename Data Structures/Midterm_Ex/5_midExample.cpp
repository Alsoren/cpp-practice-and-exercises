#include <iostream>
using namespace std;

int arr_sum(const int arr[], int n) {
    if (n <= 0)return 0;
    return arr[n-1] + arr_sum(arr, n - 1);
}

int main() {

    int arr[10] = {1,3,2,4,5,6,7,8,9,10};
    cout << "Sum of array: " << arr_sum(arr, 10);
    return 0;
}