#include <iostream>
using namespace std;

class Point {
    private:
        double x, y;

    public:
        Point(double x, double y){
            this->x = x;
            this->y = y;
        }

        Point operator+(const Point& p2){ // p1.operator+(p2) bu yüzden sadece 2. point parametre olarak gönderilir.
            
            return Point(x + p2.x, y + p2.y);
        }
        
        friend ostream& operator<<(ostream& out, Point& p);
};

ostream& operator<<(ostream& out, Point& p){
    out<< "(" << p.x << "," << p.y << ")"<< endl;
    return out;
}



int main() {
    Point p1 = {1, 2};
    Point p2 = {2, 3};

    Point p3 = p1 + p2; // p1.operator+(p2) şeklinde algılar terminal
    cout << p3;
}