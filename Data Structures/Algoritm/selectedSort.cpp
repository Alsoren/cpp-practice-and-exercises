#include <iostream>
#include <vector>
using namespace std;

void selectionSort(int arr[], int len){
    int min;
    int temp;
    for (int i = 0; i < len - 1; i++) // len - 1 kısmı önemli i sonuncu indexte olduğu için j = i + 1 mümkün değildir
    {
        min = i;
        for (int j = i + 1; j < len ; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    } 
}

void printArr(int arr[], int len){
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[10] = {3,5,2,4,1,6,9,7,10,8};
    
    selectionSort(arr, 10);
    cout << "array: "; 
    printArr(arr, 10);

    return 0;
}
