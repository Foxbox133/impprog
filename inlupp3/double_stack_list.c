#include <stdio.h>
#include <stdlib.h>
#include "double_stack.h"

typedef struct double_stack_node_struct{
    struct double_stack_node_struct* next;
    struct double_stack_node_struct* prev;
    double key;
} double_stack_node;

typedef struct double_stack_struct{
    struct double_stack_node_struct *head;
    int length;
} double_stack;


int push(double_stack* listan, double value){
    listan->length++;
    double_stack_node*currentNode=make_node(value);
    currentNode->next = listan->head;
    
    if(listan->head != NULL){
        listan->head->prev = currentNode;
    }
    
    listan->head = currentNode;
    
    // true om lyckat annars false
    return(listan->head == currentNode);
}

void printStack(double_stack* listan){
    double_stack_node*currentNode = listan->head;
    printf("\nframåt: \n");
    while(currentNode!=NULL){
        printf("%f,", currentNode->key);
        currentNode = currentNode->next;
    }
    printf("\n\\\n");
}


double_stack_node *delete(double_stack*the_list, double_stack_node*deleted_node){
    double_stack_node*current_node=the_list->head;

    if(current_node->next!=NULL){
        
        the_list->head->next->prev=NULL;
        the_list->head=the_list->head->next;
        return deleted_node;
    }
    the_list->head=NULL;
    return deleted_node;

    
}
int pop(double_stack*listan,double*value){
    if (listan->head==NULL){
        return 0;
    }
    
    *value=listan->head->key;
    delete(listan,listan->head);
    return 1;
}
int peek(double_stack*listan){
    if(listan->head!=NULL){
        return (listan->head->key);
    }
    return 0;
}

int isEmpty(double_stack* listan){
    return (listan->head == NULL);
}


double_stack_node*make_node(double value){
    double_stack_node*new_node=malloc(sizeof(double_stack_node));
    new_node->key=value;
    new_node->next=new_node->prev=NULL;
    return new_node;
}
double_stack*create_stack(){
    double_stack*new_stack=malloc(sizeof(double_stack));
    new_stack->head=NULL;
    new_stack->length=0;
    return new_stack;

}

int stackSize(double_stack*listan){
    return (listan->length);
}