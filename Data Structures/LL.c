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

void display() {
    Node* ptr;
    for (ptr = head; ptr != NULL; ptr = ptr->next) {
        printf("%d\n", ptr->item);
    }
}

void insert_pos(int val, int pos) {
    Node* ptr = newnode(val);
    Node* f = head;
    for (int i = 1; i < pos; i++) f = f->next;
    ptr->next = f->next;
    f->next = ptr;
}

int main() {
    insert_end(3);
    insert_end(5);
    insert_end(10);
    insert_end(20);
    insert_end(30);
    insert_pos(7, 5);
    display();
}
