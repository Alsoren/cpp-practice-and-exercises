#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student() {  // varsayılan constructor
        name = "";
        age = 0;
    }

    // friend fonksiyonlar sayesinde private verilere erişebiliriz
    friend istream& operator>>(istream& in, Student& s);
    friend ostream& operator<<(ostream& out, const Student& s);
};

// Kullanıcıdan veri okuma (cin >> s)
istream& operator>>(istream& in, Student& s) {
    cout << "İsim girin: ";
    getline(in, s.name);  // ws: boşluk karakterlerini yoksayar
    cout << "Yaş girin: ";
    in >> s.age;
    return in;
}

// Ekrana yazdırma (cout << s)
ostream& operator<<(ostream& out, const Student& s) {
    out << "Öğrenci Adı: " << s.name << ", Yaş: " << s.age;
    return out;
}

int main() {
    Student s;  

    cin >> s;   // kullanıcıdan veri al
    cout << endl << s << endl;  // ekrana yazdır

    return 0;
}