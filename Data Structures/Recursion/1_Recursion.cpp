#include <stdlib.h>
#include <iostream>
using namespace std;

int sumNumber(int number){
    int sum = 0;

    if (number == 0)
    {
        return 0;
    }
    return  number + sumNumber(number - 1);
}

int main(){

    cout << sumNumber(4);
    return 0;
}
