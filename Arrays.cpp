#include <iostream>
using namespace std;

//1.Example
void concat(int arr1[], int arr2[], int length1, int length2, int result[]){
    for (int i = 0; i < length1; i++)result[i] = arr1[i];
    for (int i = 0; i < length2; i++)result[length1 + i] = arr2[i];
}

//2.Example
int find_common(unsigned int arr1[], unsigned int arr2[], int length){
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (arr1[i] == arr2[j]) return i;
        }
    }
    return -1;
}

//3.Example
void arr_shift(int arr[], int len){ // 1,2,3,4,5
    
    int temp = arr[0];
    for (int i = 0; i < len - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[len - 1] = temp;
}

// 7.Example
bool arr_is_equal(int arr1[], int arr2[], int len1, int len2){
    if (len1 != len2)return false;
    
    for (int i = 0; i < len1; i++)
    {
        if (arr1[i] != arr2[i]) return false;
    }

    return true;
}

//9.Example
bool is_arr_constant(int arr[], int n) {
    int c = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] != c)
            return false;
    }
    return true;
}

int main(){

    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,3,4,5};
    cout << arr_is_equal(arr1, arr2, 5,5);
    return 0;
}