#include <iostream>
#include <stdexcept> // runtime_error, domain_error vb. sınıflar burada bulunur
using namespace std;

// Bölme işlemi yapan fonksiyon
double divide(double top, double bottom) {
    // Eğer payda sıfırsa hata fırlat
    if (bottom == 0) {
        throw domain_error("Division by zero is not allowed!");
    }
    return top / bottom;
}

int main() {
    try {
        double x, y;
        cout << "Enter two numbers: ";
        cin >> x >> y;

        // Kullanıcı geçersiz bir giriş yaptıysa (örneğin harf)
        if (cin.fail()) { // cin.fail() → kullanıcı geçersiz (non-numeric) bir şey yazdıysa true döner.
            throw invalid_argument("Invalid input! Please enter numeric values.");
        }

        cout << "Result: " << divide(x, y) << endl;
    }
    // domain_error türündeki hatayı yakalanır 
    catch (const domain_error& e) {
        cerr << "ERROR: " << e.what() << endl;
    }

    catch (const invalid_argument& e){
        cerr << "ERROR: " << e.what() << endl;
    }

    // Bilinmeyen bir hata olursa yakalanır 
    catch (...) { // daha önce parametre olarak belirtilmemiş bir hata varsa burada hepsi yakalanır.
        cerr << "ERROR: Unknown exception occurred!" << endl;
    }

    cout << "Program continues..." << endl;
    return 0;
}