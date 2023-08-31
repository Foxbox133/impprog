#include <stdio.h>
#include <stdlib.h>


typedef struct _node{
    struct _node* next;
    struct _node* prev;
    int key;
} Node;

typedef struct _linked_list{
    Node *head;
    int length;
} List;

Node*make_node(int value){
    Node*new_node=malloc(sizeof(Node));
    new_node->key=value;
    new_node->next=new_node->prev=NULL;
    return new_node;
}


int push_front(List* listan, int value){
    Node *currentNode=make_node(value);
    listan->length++;
    currentNode->next = listan->head;
    
    if(listan->head != NULL){
        listan->head->prev = currentNode;
    }
    
    listan->head = currentNode;
    
    // true om lyckat annars false
    return(listan->head == currentNode);
}

void printList(List* listan){
    Node*currentNode = listan->head;
    
    while(currentNode!=NULL){
        printf("%d ", currentNode->key);
        currentNode = currentNode->next;
    }
}


int main(int argc, const char *argv[]){
    List L;
    L.head=NULL;
    L.length=0;
    for (int i = 1; i < argc; i++){
        int temp_var=atoi(argv[i]);
       
        push_front(&L, temp_var);
        
    }
    
    

    printList(&L);
}

