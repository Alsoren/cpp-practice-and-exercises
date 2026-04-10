#include <iostream>
#include <vector>
using namespace std;

// VEKTÖRLERİN KULLANIMI

int main() {
    // Standart Template Library(STL) -> Containers: *Vectors*, Arrays, Lists, Queue, Stacks, Map, Hash tabanlı veri yapıları

    vector<int> numbers; // Dinamiktir başta eleman sayısı girilmesine gerek yok sonradan da eleman eklenebilir.
    numbers = {1,2,3,4,5,6,7,8,9,10,11,12,13};

    cout << "at(): " << numbers.at(6) << endl;
    cout << "front(): " << numbers.front() << endl; // vektörün ilk değerini döner.
    cout << "back(): " << numbers.back() << endl; // vektörün son değerini döner
    cout << endl;


    // Itterator
    cout << "begin() - end()" << endl; // begin - end
    for (auto i =numbers.begin() ; i != numbers.end(); i++)// auto i bir adres benzeri nesnedir (itterator) dolayısıyla *i adresdeki değerdir
    {
        cout << *i << " ";
    }
    cout << endl;

    cout << "cbegin() - cend()" << endl; // constant begin - constant end
    for (auto i =numbers.cbegin() ; i != numbers.cend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    cout << "rbegin() - rend()" << endl; // reverse begin - reverse end
    for (auto i =numbers.rbegin() ; i != numbers.rend(); i++)
    {
        cout << *i << " ";
    }
     cout << endl;

    cout << "crbegin() - crend()" << endl; // constant reverse begin - constant reverse end
    for (auto i =numbers.crbegin() ; i != numbers.crend(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}