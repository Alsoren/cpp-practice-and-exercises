#include <iostream>
using namespace std;

bool arr_is_increasing(const int arr[], int n){
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main() {

    int arr[10] = {1,3,2,4,5,6,7,8,9,10};
    if (arr_is_increasing(arr,10)) cout << "True";
    else cout << "false";
    return 0;
}