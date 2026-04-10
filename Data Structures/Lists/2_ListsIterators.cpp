#include <iostream>
#include <list>
#include <string>
using namespace std;

void showList(list<int>& l){
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    
}

// LIST ITERATORS PRATİĞİ

int main() {

    list<int> l1 = {30,10,20,50,40,90,60,80,70};
    auto it = l1.begin(); // auto sayesinde l1.begin() fonkun dönüş tipi otomatik algılanıp it'e atanır yani auto = list<int>::iterator
    
    for ( it; it != l1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Yukarıdaki listenin 3. elemanını (20) iterator kullanarak sil.
    
    advance(it, 2);//advance ile iteratoru iki adım götürürüz 3.elemana gelir //it + 1 falan yapamıyoruz çünkü ramde ardışık tutulmuyor veriler
    l1.erase(it); // iteratorun olduğu elemanı siler
    showList(l1);
    it = l1.begin(); // it'i tekrar başa alırız

    // Listenin 2. elemanından önce 99 ekle.

    advance(it, 1);
    l1.insert(it, 99);
    showList(l1);
    it = l1.begin(); // it'i tekrar başa alırız

    // Bir liste oluştur, const_iterator ile elemanları yazdır.
    list<int> nums = {5, 10, 15, 20};
    list<int>::const_iterator const_it;

    for (it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << " ";
        //*it = 100; // ❌ Derleme hatası: const_iterator üzerinden değiştirilemez
    }

    return 0;
}