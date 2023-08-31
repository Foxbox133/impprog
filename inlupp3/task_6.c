#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "double_stack.h"
//
int main(){
    errno=0;
    char plus[1] ="+";
    char minus[1]= "-";
    char divide[1]= "/";
    char multiply[1]= "*";
    //char *check;
    char string;
    char *string_ptr=&string;
    //double d;
    double_stack*stack=create_stack();
   for (int i=5;i>0;i--){
        scanf("%s", string_ptr);
        //printf("%s ",string_ptr);
       // d = strtod( string_ptr, &check );
        if (errno==ERANGE){
            printf("%d",5567);
        }
        
        
        if (errno==0){
            if (strcmp(plus, &string)==0)
            {
                printf("%d ", 1738);
                push(stack, 5);
            }
             if (strcmp(minus, &string)==0)
            {
                printf("%d ", 1739);
                push(stack, 5);
            }
            
             if (strcmp(divide, &string)==0)
            {
                printf("%d ", 1740);
                push(stack, 5);
            }
            
             if (strcmp(multiply, &string)==0)
            {
                printf("%d ", 1741);
                push(stack, 5);
            }
            
        }
      
        
        
        
       
        
        
        
    }
}