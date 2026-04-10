#include <iostream>
using namespace std;

void arr_bin_sort ( int arr [] , int n ){
    int count0 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)count0++;
    }

    for (int i = 0; i < n; i++)
    {
        if (i < count0)
        {
            arr[i] = 0;
            continue;
        }
        arr[i] = 1;
    }
}

int main() {

    int arr[10] = {0,1,0,1,0,1,0,1,0,1};
    arr_bin_sort(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}