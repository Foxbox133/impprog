#include <stdio.h>
#include <stdlib.h>
#include "double_stack.h"

int main(int argc, const char *argv[]){
    double_stack*stack=create_stack();
    //printf("%d ",isEmpty(stack));
    double pop_ptr=0;

    for (int i = 1; i < argc; i++){
        double temp_var=atof(argv[i]);
        if(push(stack,temp_var)==1){
            //printf("%f\n",temp_var);
        }
    }

    for(int count=1;count<argc;count++){
        if(pop(stack,&pop_ptr)==1){
            printf("%f\n", pop_ptr);
        }
        else{
            printf("137");
        }
        
        
    }

   
    //pop(stack,&pop_ptr);
    //printf("%f\n", pop_ptr);
    //pop(stack,&pop_ptr);
    //printf("%f\n", pop_ptr);
    
   // printf("%d ",isEmpty(stack));
}