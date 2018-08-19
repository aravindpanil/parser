#include <stdio.h>
#include <stdlib.h>

struct node_s{
    int item;
    struct node_s* next;
};

typedef struct node_s Node;
Node* head = NULL;
Node* tail = NULL;

void insert_end(int val){
    
    if(head){
        //insert at end
    }
    else{
        head = malloc(sizeof(Node));
        head->item = val;
        head->next = tail;
    }
}

int main(){
    insert_end(3);
}
