#include <iostream>
using namespace std;

string decimalToBinary(int dec, string result) {

    if (dec == 0)
    {
        return result;
    }
    
    char bit = dec % 2 + '0';
    result = bit + result;
    return decimalToBinary(dec / 2, result);
}

int main() {
    int dec;
    cout << "Please enter a decimal integer: ";
    cin >> dec;

    cout << decimalToBinary(dec, "");

    return 0;
}
