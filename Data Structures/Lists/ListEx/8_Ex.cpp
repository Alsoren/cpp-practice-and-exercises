#include <iostream>
#include <list>
#include <string>
using namespace std;

template <typename T>
typename list<T>::iterator maxElement(list<T>& alist){
    typename list<T>:: iterator iter = alist.begin();
    if (alist.empty())return alist.end();
    typename list<T>:: iterator maxiter = iter++;
    while (iter != alist.end())
    {
        if (*maxiter < *iter)maxiter = iter;
        iter++;
    }
    return maxiter;
}

template <typename T>
void maxElement(list<T>& alist){
    typename list<T>:: iterator iter = alist.begin();
    while (iter != alist.end())
    {
        if (0 > *iter)*iter = (-1)*(*iter);
        iter++;
    }
}

int main() {
    int arr[5] = {1, 2, -33, 4, 5};
    list<int> nmbers(arr, arr + 5);

    list<int>::iterator iter = maxElement(nmbers);

    while(iterCh != chList.end()){
        char ch;
        ch = 
        revList.push_front() 
    }
    
    cout << "Max element: " << *iter;

    return 0;
}