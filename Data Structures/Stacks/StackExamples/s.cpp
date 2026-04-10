#include <iostream>
#include <stack>
using namespace std;

template <typename T>
bool bottom(const stack<T>& s, T& last)
{
    stack<T> temp = s;
    int size = s.size();
    if (size == 0)return false;
    for (int i = 0; i < size - 1; i++)
    {
        temp.pop();
    }
    last = temp.top();
    return true;
}

int main() {
    stack<int> stc;
    for (int x : {1,2,3,4,5,6,7}) stc.push(x);
    int last;
    cout << stc.top() << " " <<bottom(stc, last);
    return 0;
}