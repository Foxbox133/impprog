#include <stdio.h>
#include <stdlib.h>

double sum( double *a, double b){ 
    *a=*a+b;
    return 0;  // När vi kallar på funktionen sum så kommer den returnera summan av parametrarna a och b
}

int main(int argc, char *argv[]){//Kollar om vi har rätt antal argument
        double a=atof(argv[1]);
        double b=atof(argv[2]);
        if (argc!=3){
           printf(" Fel! Du måste skriva två tal!"); 
        }
        else{ 
            for ( int i=1; i<=2; i++){
                if (atof(argv[i])==0){
                    printf("%s kunde inte adderas ", argv[i] ); // Om något av användarens input inte är nummer så är de lika med noll och programmet skriver att det inte gick att addera det talet
                }
                else if (i==2){
                    sum(&a,b);
                    printf("%f",a);
                    
                }
            }
        }
    return 0;
    }
