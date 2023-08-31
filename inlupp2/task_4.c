#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double langd(double *a, double *b, double *c){
    double len_a=pow(*a,2);
    double len_b=pow(*b,2);
    double len_c=pow(*c,2);
    double len_total=len_a+len_b+len_c;
    len_total=sqrt(len_total);
    return len_total;
}

int main(int argc, char *argv[]){//Kollar om vi har rätt antal argument
    double g;
    double array[sizeof(argc)]={'\0'};
    char *endptr;
    if(argc==4){
        for (int i=1; i<4; i=i+1){
            array[i]=strtod(argv[i],&endptr);
        }
        g=langd(&(array[1]), &(array[2]), &(array[3]));
        printf("%f",g);   
    
        
    }
        
   
    else{ 
        printf("Du måste skriva 3 siffror!");
    }
 }