#include <iostream>
#include <stdexcept> // invalid_argument burada tanımlı
using namespace std;

int main() {
    try
    {
        double number;
        cout << "Please enter a positive number: ";
        cin >> number;

        if (number <= 0)
        {
            // negatif sayıysa exception fırlat
            throw invalid_argument("You cant enter a negative number!");
        }
        
        cout << "Your number: " << number << endl;
    }
    catch(const invalid_argument& e)
    {
        // hatayı yakala ve mesajını ekrana yazdır
        cerr << "ERROR: " << e.what() <<endl;
    }
    
    cout << "Program is countinou..." << endl;
    return 0;
}


// Yani burdaki asıl olay hatalı bir giriş yapılmasına rağmen program yapısı çökmeden !!kontrollü bir şekilde!! programın işlevini sürdürebilmesi