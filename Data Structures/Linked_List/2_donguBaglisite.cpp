#include <stdio.h>
#include <stdlib.h>

struct n {
    int data;
    struct n* next;
};
typedef struct n node;

void printList(node * head){
    int i = 0;
    while(head != NULL){
        printf("%d'st lists data: %d \n", i+1, head->data);
        i++;
        head = head->next;
    }
}

void addToList(node * r, int i){
    while (r->next != NULL){
        r = r->next;
    }
    r->next = (node *) malloc(sizeof(node));
    r ->next ->data = i;
    r ->next ->next = NULL;
}

int main(){
    node * root;
    root = (node *)malloc(sizeof(node));
    root -> data = 500;
    root -> next = NULL;
    node * iter = root;
    for (int i = 0; i < 5; i++)
    {
        addToList(root, i*10);
    }
    printList(root);
    return 0;
}