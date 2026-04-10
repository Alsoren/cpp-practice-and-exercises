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
node * ekleSirali(node * r, int x){
    if (r == NULL){ // Linked listte henüz bir node yoksa
        r = (node *) malloc(sizeof(node));
        r ->data = x;
        r ->next = NULL;
        return r;
    }
    if(r->data > x){ // linked listin başına bir ekleme yapılıp root değişitirilecekse
        node * temp;
        temp = (node *) malloc(sizeof(node));
        temp -> data = x;
        temp -> next = r;
        return temp;
    }
    // Ortaya veya sona bir ekleme yapılacaksa
    node * itter = r;
    while (itter -> next != NULL && itter -> next -> data < x){
        itter = itter -> next;
    }
    
    node * temp = (node *) malloc(sizeof(node));
    temp -> data = x;
    temp -> next = itter -> next;
    itter -> next = temp;
    return r;
    
}

int main(){
    node * root;
    root = NULL;
    root = ekleSirali(root, 50);
    root = ekleSirali(root, 10);
    root = ekleSirali(root, 20);
    root = ekleSirali(root, 30);
    root = ekleSirali(root, 40);
    root = ekleSirali(root, 60);
    root = ekleSirali(root, 0);

    printList(root);
    return 0;
}