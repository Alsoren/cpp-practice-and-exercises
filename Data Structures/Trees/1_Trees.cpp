#include <iostream>
#include <cstddef>   // NULL için
using namespace std;

template <typename T>
class node{
public:
    T nodeValue;
    node<T>* left;
    node<T>* right;

    node() : left(NULL), right(NULL){}

    node(const T& item, node<T>* nextNode = NULL) : nodeValue(item), left(nextNode), right(nextNode){}
};

node<int>* add_node(const int& data) {
    return new node<int>(data);
}


int main()
{
    node<int>* root = new node<int>(15);
    root -> left = add_node(10);

    return 0;
}
