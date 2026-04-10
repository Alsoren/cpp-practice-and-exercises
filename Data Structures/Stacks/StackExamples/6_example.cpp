#include <iostream>
#include <stack>
using namespace std;

template <typename T>
bool bottom(const stack<T>& s, T& last)
{
    stack<T>t = s;
    if(t.empty())return false;
    while (!t.empty())
    {
        last = t.top();
        t.pop();
    }
    return true;
    
}



int main() {
    stack<int> stc;
    for (int x : {1,2,3,4,5,6,7}) stc.push(x);
    int last;
    cout << stc.top() << " " <<bottom(stc, last);
    return 0;
}