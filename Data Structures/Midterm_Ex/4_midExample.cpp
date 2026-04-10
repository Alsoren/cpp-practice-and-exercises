#include <iostream>
using namespace std;

void print_suff(const string& str, int index = 0){

    if (index == str.size())return;
    
    cout << str.substr(index++) << endl;
    print_suff(str,index);
}

void rip_part(const string& str){ // Sınav prototipine uymuyor
    if (str.size() == 1){
        cout << str << endl;
        return;}

    cout << str << endl;
    rip_part(str.substr(1));
}

int main() {

    print_suff("ahmet");
    rip_part("Berk");
    return 0;
}