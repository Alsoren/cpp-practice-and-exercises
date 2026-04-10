#include <iostream>
using namespace std;

string linkNames(const string& strA, const string& strB, char ch) {
    return strA + ch + strB;
}

int main() {
    cout << linkNames("Alp", "Alp", '*');
    return 0;
}