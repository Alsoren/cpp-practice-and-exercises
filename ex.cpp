#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14;


class rectangle{

}

class square{
public:
    square(double len) : sq(len,len){}
    double getSide() const;
    void setSide(double len){
        sq.setSides(len, len);
    }
    double perimeter(){
        sq
    }
    double area() const;
    double diagonol() const;
    
private:
    rectangle sq

}
    

int main() {
    int arr[10] = {3,5,2,4,1,6,9,7,10,8};
    insertion_Sort(arr, 10);

    return 0;
}