#include <iostream>
#include <list>
#include <string>
using namespace std;

void showList(const list<char>& l){
    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    
}

// LİSTLERİN KULLANIMI

int main() {
    list<char> chList, revList;
    char ch;

    chList.push_front('t');
    chList.push_front('a');
    chList.push_back('j');
    chList.pop_front();


    while (!chList.empty())
    {
        revList.push_front(chList.front());
        chList.pop_front();
    }
    
    showList(chList);
    showList(revList);

    return 0;
}