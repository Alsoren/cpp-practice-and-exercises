#include <iostream>
#include <cstddef>   // NULL için
using namespace std;

/* =========================
   NODE TANIMI (PDF ile aynı)
   ========================= */
template <typename T>
class node
{
public:
    T nodeValue;        // düğümün tuttuğu veri
    node<T>* next;      // sonraki düğüm

    node() : next(NULL) { }

    node(const T& item, node<T>* nextNode = NULL)
        : nodeValue(item), next(nextNode) { }
};

/* =========================
   BAŞA EKLEME (push_front)
   ========================= */
template <typename T>
void push_front(node<T>*& front, const T& item)
{
    node<T>* newNode = new node<T>(item, front);
    front = newNode;
}

/* =========================
   SONA EKLEME (push_back)
   front + back kullanılır
   ========================= */
template <typename T>
void push_back(node<T>*& front, node<T>*& back, const T& item)
{
    node<T>* newNode = new node<T>(item);

    if (front == NULL)          // liste boş
    {
        front = back = newNode;
    }
    else
    {
        back->next = newNode;
        back = newNode;
    }
}

/* =========================
   LİSTEYİ DOLAŞMA (traversal)
   ========================= */
template <typename T>
void printList(node<T>* front)
{
    node<T>* p = front;

    while (p != NULL)
    {
        cout << p->nodeValue << " ";
        p = p->next;
    }
    cout << endl;
}

/* =========================
   MAIN – ÖRNEK KULLANIM
   ========================= */
int main()
{
    node<int>* front = NULL;
    node<int>* back  = NULL;

    // Başa ekleme
    push_front(front, 10);   // 10
    push_front(front, 5);    // 5 10

    // Sona ekleme
    push_back(front, back, 20); // 5 10 20
    push_back(front, back, 30); // 5 10 20 30

    // Listeyi yazdır
    printList(front);

    return 0;
}
