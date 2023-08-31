#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    
    srand(time(NULL));

    int svar=1+rand()%6;
    
    printf("%d\n", svar);
}