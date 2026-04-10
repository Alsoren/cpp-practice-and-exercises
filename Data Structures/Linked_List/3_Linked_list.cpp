#include <iostream>
#include <cstddef>   // NULL için
using namespace std;

template <typename T>
class node{
public:
    T nodeValue;
    node<T>* next;

    node() : next(NULL){}

    node(const T& item, node<T>* nextNode = NULL) : nodeValue(item), next(nextNode){}
};
template <typename T>
void push_front(node<T>*& front, const T& value){
    node<T>* newNode = new node<T>(value);
    newNode ->next = front;
    front = newNode;
}

template <typename T>
void replace(node<T>* front, const T& findItem, const T& repItem){
    node<T>* corr = front;
    while (corr != NULL)
    {
        if (corr->nodeValue == findItem) corr->nodeValue = repItem;
        corr = corr -> next;
    }
}

template <typename T>
void push_back(node<T>*& front, node<T>*& back, const T& value){
    node<T>* newNode = new node<T> (value);

    if(front == NULL){
        front = back = newNode;
    }
    else{
        back -> next = newNode;
        back = newNode;
    }
}

template <typename T>
node<T>* find(node<T>* front, const T& item){
    node<T>* corr = front;
    while(corr != NULL){
        if (corr ->nodeValue == item)return corr;
        corr = corr ->next;
    }
    return nullptr;
}


template <typename T>
void print_list(node<T>* front){
    node<T>* corr = front;
    while (corr != NULL)
    {
        cout << corr ->nodeValue << " ";
        corr = corr -> next;
    }
    cout << endl;
}

int main()
{
    node<int>* front = nullptr;
    node<int>* back = nullptr;
    push_front(front, 20);
    push_front(front, 20);
    push_front(front, 20);
    push_front(front, 20);
    print_list(front);

    replace(front, 20, 30);
    print_list(front);
    return 0;
}
