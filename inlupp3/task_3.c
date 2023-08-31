#include <stdio.h>
#include <stdlib.h>
#include "list.h"

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

