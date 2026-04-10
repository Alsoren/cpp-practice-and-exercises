#include <iostream>
#include <vector>
using namespace std;

// ELEMENT ERİŞİMİ VE CAPACİTY KAVRAMI -> Ram de vektör yönetimi

int main() {
    vector<int> numbers(15);
    numbers = {1,2,3,4,5,6,7,8,9,10};

    int *ptr = numbers.data(); // ilk indexin adresini ptr pointerına verir
    cout << "*(ptr + 8): " <<*(ptr + 8) << endl; 

    // Size - Capacity
    cout << "Size: " << numbers.size() << endl; // Vektöre ayrılan alan içinde kaç elamanı olduğunu döner
    cout << "Capacity: " << numbers.capacity() << endl; // Vektöre ayrılan alanı döner
    cout << "Max size: " << numbers.max_size() << endl << endl; // Sistem tarafından teorik olarak ayrılabilecek en büyük eleman sayısını döner

    cout << "==================Resize-Shrink to fit=======================" << endl << endl;

    // Resize - Shrink to fit -> Ram de Cambazlık işi

    cout << "First size: " << numbers.size() << endl;
    for (auto i =numbers.begin() ; i != numbers.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    numbers.resize(5);     // ⚠️ Kapasite aynı kalır, yalnızca size 5’e düşer. 
                           // Fazla elemanlar silinir ama bellek alanı (capacity) aynı kalır.

    cout << "Second size: " << numbers.size() << endl;
    for (auto i =numbers.begin() ; i != numbers.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    numbers.shrink_to_fit(); // Kapasite size ile aynı boyuta gelir gereksiz ayırtılan yerler rame geri verilir
    cout << "Shrink to fit: " << numbers.size() << endl;
    for (auto i =numbers.begin() ; i != numbers.end(); i++)
    {
        cout << *i << " ";
    }
    
    return 0;
}