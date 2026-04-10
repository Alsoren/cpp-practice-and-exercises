#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int num){
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high){
        int mid = (low + high) / 2; //mid = low + (high - low) / 2; çok büyük dizilerde overflow riskini engeller

        if(arr[mid] < num) low = mid + 1;
        else if (arr[mid] > num) high = mid - 1;
        else return mid;
    }

    return -1;
}

int recBinarySearch(vector<int>& arr, int low, int high, int num){
    int mid = (high + low) / 2;

    if (arr[mid] == num) return mid;
    else if (arr[mid] > num) return recBinarySearch(arr, low, mid - 1, num);
    else return recBinarySearch(arr, mid + 1, high, num);
}



int main() {

    vector<int> arr(10);
    arr = {1,2,3,4,5,6,7,8,9,10};
    cout << "index of 10 is "<< recBinarySearch(arr,0, 9, 7);

    return 0;
}
