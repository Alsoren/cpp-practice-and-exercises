#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int cap;
    int n;
public:
    Stack() : arr(new int[5]), cap(5), n(0) {}
    ~Stack() { delete[] arr; }

    void grow(){
        arr2
    }

    void push(int x){
        arr[n++] = x;
    }
    void pop(){
        if(n == cap) 
        --n;
    }

    friend ostream& operator<<(ostream& out, const Stack& s);
};

ostream& operator<<(ostream& out, const Stack& s) {
    out << "[";
    for (int i = 0; i < s.n; i++) {
        out << s.arr[i];
        if (i + 1 < s.n) out << " ";
    }
    out << "]";
    return out;
}

int main() {
    Stack stc;          // artık olur
    stc.push(10);
    stc.push(20);
    stc.push(30);
    stc.pop();
    cout << stc;
}
