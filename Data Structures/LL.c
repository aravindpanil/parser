#include <stdio.h>
#include <stdlib.h>

struct node_s {
    int item;
    struct node_s* next;
};

typedef struct node_s Node;
Node* head = NULL;
Node* tail = NULL;

Node* newnode(int val) {
    Node* nd = malloc(sizeof(Node));
    nd->item = val;
    nd->next = NULL;
    return nd;
}

void insert_end(int val) {
    Node* nd = newnode(val);

    if (head) {
        tail->next = nd;
        tail = nd;
        tail->next = NULL;
    }

    else {
        head = tail = nd;
        head->next = NULL;
        tail->next = NULL;
    }
}

void insert_pos(int val, int pos) {
    Node* ptr = newnode(val);
    Node* f = head;
    for (int i = 1; i < pos; i++) f = f->next;
    ptr->next = f->next;
    f->next = ptr;
}

void insert_begin(int val) {
    Node* nd = newnode(val);
    nd->next = head;
    head = nd;
}

void display() {
    Node* ptr;
    for (ptr = head; ptr != NULL; ptr = ptr->next) {
        printf("%d\n", ptr->item);
    }
}

int front(){
    return(head->item);
}

int back(){
    return(tail->item);
}

int size(){
    int size = 0;
    Node* ptr = head;
    for(;ptr!=NULL;ptr = ptr->next) size++;
    return(size);
}

int main() {
    insert_end(3);
    insert_end(5);
    insert_end(10);
    insert_end(20);
    insert_end(30);
    insert_pos(7, 5);
    insert_begin(100);
    insert_begin(24);
    insert_pos(23,4);
    insert_end(1200);
    display();
    printf("%d %d %d\n",front(),back(),size());
}
