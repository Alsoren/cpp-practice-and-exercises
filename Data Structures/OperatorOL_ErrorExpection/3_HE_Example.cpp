#include <iostream>
#include <fstream>     // Dosya işlemleri için
#include <exception>   // std::exception sınıfı burada bulunur
using namespace std;

class FileNotFoundException : public exception{ // Ve bu sınıf std::exception sınıfından miras (inheritance) alır.
    private:
        const char* message; // Karakter dizisine işaret eder what() dönüş tipi 'const char*' Bu yüzden aynı tipte mesaj kullanılır
    public:
        // Constructure 
        FileNotFoundException() noexcept{ // “Bu fonksiyon çalışırken hata fırlatmayacağıma söz veriyorum.” demektir.
            message = "File not found!";    //Derleyici fonksiyonun güvenli olduğunu bilir,
        }                                   //Gereksiz try-catch mekanizmaları oluşturmaz, Performans artar

        // what() fonksiyonu - hata mesajını döndür
        const char* what() const noexcept override {
            return message;
        }
};

void readFile(string filename){
    ifstream file(filename);

    if (!file.is_open()) {
        throw FileNotFoundException();
    }

    cout << "Dosya Yok zaten gerisi önemli değil";
}

int main() {
    try {
        string filename;
        cout << "Enter filename: ";
        cin >> filename;

        readFile(filename);
    }
    catch (const FileNotFoundException& e) {
        cerr << "ERROR: " << e.what() << endl;
    }
    catch (...) {
        cerr << "ERROR: Unknown exception occurred!" << endl;
    }

    cout << "Program continues..." << endl;
    return 0;
}
