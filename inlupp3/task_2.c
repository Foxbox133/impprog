#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

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

int add_after(List* listan, int value){
    errno=0;
    listan->length++;
    Node*newNode= make_node(value);
    Node*huvud=listan->head;

    newNode->next=NULL;
    if(huvud==NULL){
        newNode->prev=NULL;
        listan->head=newNode;
        if (errno==0){
            return 1;
        }
        else{
            return 0;
        }      
    }
    while (huvud->next!=NULL){
        huvud=huvud->next;
    }
    
    huvud->next=newNode;
    newNode->prev=huvud;
    if (errno==0){
        return 1;
    }
    else{
        return 0;
    }    
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
       
        add_after(&L, temp_var);
        
    }
    
    

    printList(&L);
}

