#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int c = 0) {
        count = c;
    }

    // Prefix ++c
    Counter& operator++() {
        ++count;          // önce artır
        return *this;     // artırılmış nesneyi döndür
    }

    // Postfix c++
    Counter operator++(int) {  // int değeri sadece ayırt etmek için konulmuştur
        Counter temp = *this;  // önce mevcut değeri yedekle çünkü işlem önce gerçekleşir ardından değer arttırılır
        ++count;               // sonra artır
        return temp;           // eski (artırılmadan önceki) değeri döndür
    }

    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(5);

    cout << "Baslangic: ";
    c1.display();

    ++c1; // prefix çağrılır
    cout << "++c1 sonrasi: ";
    c1.display();

    c1++; // postfix çağrılır
    cout << "c1++ sonrasi: ";
    c1.display();

    return 0;
}
