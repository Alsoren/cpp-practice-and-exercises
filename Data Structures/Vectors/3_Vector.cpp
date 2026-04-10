#include <iostream>
#include <vector>
using namespace std;

// MODIFIERS

int main() {
    vector<int> numbers;
    vector<int> v1 = {7,49};
    vector<int> v2 = {13,5};

    numbers.assign(5, 7); 
    //  Vektörü 5 elemanlı yapar ve HER elemanı 7 yapar (size=5, capacity >=5).

    cout << "1. (Assign): ";
    for (int i = 0; i < numbers.size(); i++) cout << numbers[i] << " ";
    
    numbers.push_back(19); //  Sona 19 ekler (size artar, capacity gerekirse büyür).
    numbers.push_back(42); //  Sona 42 ekler
    cout << "\n2. (Push Back): ";
    for (int i = 0; i < numbers.size(); i++) cout << numbers[i] << " ";

    numbers.pop_back(); //  Sondaki elemanı siler; capacity değişmez.
    numbers.pop_back(); // 
    cout << "\n3. (Pop Back): ";
    for (int i = 0; i < numbers.size(); i++) cout << numbers[i] << " ";

    numbers.insert(numbers.begin(), 19);          //  Başa ekler (index 0 öncesi).
    numbers.push_back(42);                        //  Sona eklemenin tercih edilen yolu
    numbers.insert(numbers.begin() + 2, 42);      //  Başlangıçtan 2 ileri (3. konum) ekler
    cout << "\n4. (Insert begin-end): ";
    for (int i = 0; i < numbers.size(); i++) cout << numbers[i] << " ";

    numbers.erase(numbers.begin());               //  Başı siler; capacity değişmez.
    numbers.erase(numbers.end());                 //  Son elemanı siler
    numbers.erase(numbers.begin() + 1);           //  Başlangıçtan 1 ileri konumdakini siler
    cout << "\n5. (Erase begin-end): ";
    for (int i = 0; i < numbers.size(); i++) cout << numbers[i] << " ";

    numbers.emplace(numbers.begin(), 19);         //  Başa “yerinde kurarak” ekler (insert'ten farkı: in-place construction).
    numbers.emplace_back(42);                     //  Sona yerinde kurarak ekler (push_back gibi ama ctor çağırır).
    numbers.emplace(numbers.begin() + 2, 42);     //  Başlangıçtan 2 ileriye yerinde kurar
    cout << "\n6. (Emplace begin-end): ";
    for (int i = 0; i < numbers.size(); i++) cout << numbers[i] << " ";
    
    numbers.clear();                              //  Tüm elemanları siler; capacity kalır.
    cout << "\n7. (Clear): ";
    for (int i = 0; i < numbers.size(); i++) cout << numbers[i] << " ";

    cout << "\nV1: ";
    for (int i = 0; i < v1.size(); i++) cout << v1[i] << " ";
    cout << "\nV2: ";
    for (int i = 0; i < v2.size(); i++) cout << v2[i] << " ";

    v1.swap(v2); //  İki vektörün içeriklerini (ve capacity'lerini) değiş tokuş eder (amortized O(1)).

    cout << "\n---After Swap---\nV1: ";
    for (int i = 0; i < v1.size(); i++) cout << v1[i] << " ";
    cout << "\nV2: ";
    for (int i = 0; i < v2.size(); i++) cout << v2[i] << " ";
    return 0;
}
