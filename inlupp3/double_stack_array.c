#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#define STACK_MAX_ 10
#include "double_stack.h"


typedef struct double_stack_struct{
    double data_array[STACK_MAX_];
    int top;
    int length;
} double_stack;




int push(double_stack* stack, double value){
    if (stack->top >= STACK_MAX_){
        return 0; // Stacken var full? Returnera 0 
    }
    stack->data_array[++stack->top] = value; // Lägg in det nya värdet och flytta toppen ett steg
    return 1;
  }

int pop(double_stack*listan,double*value){
   if (listan->top==0){
        return 0; // om stacken är tom kan vi inte pop:a. Returnera 0 
    }
    *value=listan->data_array[listan->top] ; // Lägg in det nya värdet
    listan->top--; // Flytta toppen
    return 1;
}

double addition(double_stack*stack){
    double temp_1=stack->data_array[0];
    double temp_2=stack->data_array[1];
    pop(stack,&temp_1);
    pop(stack,&temp_2);
    double temp_sum=temp_1+temp_2;
    if (push(stack,temp_sum)==1){
        return 1;
    }
    return 0;
}
double subtraction(double_stack*stack){
    double temp_1=stack->data_array[0];
    double temp_2=stack->data_array[1];
    pop(stack,&temp_1);
    pop(stack,&temp_2);
    double temp_sum=temp_1-temp_2;
    if (push(stack,temp_sum)==1){
        return 1;
    }
    return 0;
}
double multiplication(double_stack*stack){
    double temp_1=stack->data_array[0];
    double temp_2=stack->data_array[1];
    pop(stack,&temp_1);
    pop(stack,&temp_2);
    double temp_sum=temp_1*temp_2;
    if (push(stack,temp_sum)==1){
        return 1;
    }
    return 0;
}
double division(double_stack*stack){
    double temp_1=stack->data_array[0];
    double temp_2=stack->data_array[1];
    pop(stack,&temp_1);
    pop(stack,&temp_2);
    double temp_sum=temp_1/temp_2;
    if (push(stack,temp_sum)==1){
        return 1;
    }
    return 0;
}




double_stack*create_stack(){
    double_stack*new_stack=malloc(sizeof(double_stack));
    new_stack->length=0;
    new_stack->top=0;
    for (int i = 0; i<10; i++){
        new_stack->data_array[i]=0;
    }
    
    return new_stack;

}

int stackSize(double_stack*listan){
    return (listan->length);
}