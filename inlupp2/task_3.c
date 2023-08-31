#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){//Kollar om vi har rätt antal argument
   
    double array[sizeof(argc)]={'\0'};
   
    if(argc==4){
        for (int i=1; i<4; i=i+1){
            array[i]=atof(argv[i]);
        }
            for (int k=1; k<4; k++){
                printf("%f ", array[4-k]); 
        
            }
            
    }
        
   
    else{ 
        printf("Du måste skriva 3 siffror!");
    }
 }
