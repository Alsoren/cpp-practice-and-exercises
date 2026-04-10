#include <iostream>
#include <list>
#include <string>
using namespace std;

void showList(const list<int>& l){
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    
}

// LİSTLERİN KULLANIMI

int main() {

    // Standart Template Library(STL) -> Containers: Vectors, Arrays, *Lists*, Queue, Stacks, Map, Hash tabanlı veri yapıları

    list<int> l1 = {7,19,12,4}; // List tanımlaması
    list<int> l2 = {50, 60, 70};
    cout << "list 1: "; showList(l1);
    cout << "list 2: "; showList(l2);

    cout << "\n--- Push front - back ---" << endl;
    l1.push_back(10); // Listin arkasına ekleme
    l1.push_front(2); // Listin önüne ekleme
    cout << "list 1: "; showList(l1);

    cout << "\n--- .front - .back ---" << endl;
    cout << "First index: " << l1.front() << endl; // İlk değeri döner
    cout << "Last index: " << l1.back() << endl; // Son değeri döner

    cout << "\n--- Pop front - back ---" << endl;
    l1.pop_front(); // İlk değeri siler
    l1.pop_back(); // Son değeri siler
    cout << "list 1: "; showList(l1);

    cout << "\n--- Reverse ---" << endl;
    l1.reverse(); // Listi ters çevirir
    cout << "list 1: "; showList(l1);

    cout << "\n--- Sort ---" << endl;
    l1.sort(); // Listi sıralar
    cout << "list 1: "; showList(l1);

    cout << "\n--- Remove ---" << endl;
    l1.remove(12); // 12 değerine sahip bütün elemanları siler
    cout << "list 1: "; showList(l1);

    cout << "\n--- Merge ---" << endl;
    l1.merge(l2); // l1'in sonuna l2'yi ekler - Birleştirir
    cout << "list 1: "; showList(l1);

    cout << "\n--- Splice ---" << endl;
    l1.splice(l1.begin(), l2); // l1'in başına l2'yi ekler !! Mergele beraber çalışmıyor denemek için merge'i yorum satırına al
    cout << "list 1: "; showList(l1);

    return 0;
}