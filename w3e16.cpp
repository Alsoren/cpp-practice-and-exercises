#include <iostream>
#include <stack>   // NULL için
#include <list>
using namespace std;


// STACK EX 6
template <typename T>
bool bottom(const std::stack<T>& s, T& last) {
    if (s.empty()) return false;

    std::stack<T> temp = s;
    while (temp.size() > 1) temp.pop();

    last = temp.top();
    return true;
}

// LIST EX 8
template <typename T>
list<T>::iterator maxElement(list<T>& alist) {
    typename list<T>:: iterator maxIter = alist.begin(), iter;
    if (alist.empty())
    {
        return alist.end();
    }
    iter = maxIter;
    iter++;
    while(iter != alist.end()){
        if (*iter > *maxIter)maxIter = iter;
        iter++;
    }
    return maxIter;
    
}

int main()
{
    int last;
    list<int> alist = {1,2,-3,4,-5};

    // LIST EX 12-E
    list<int>:: iterator iter = alist.begin();
    while(iter != alist.end()){
        if (*iter < 0)
        {
            *iter = -(*iter);
        }
        iter++
    }
    return 0;
}
