#include <errno.h>
#include <stdio.h>
#include <stdlib.h>


double sum( double a, double b ){ 
    return a+b; // När vi kallar på funktionen sum så kommer den returnera summan av parametrarna a och b
}

int main(int argc, const char *argv[]){ //kollar om vi har rätt antal argument{
        if (argc!=3)
           printf("Fel! Du skriva 2 tal!"); 
        else if (errno!=0)
                printf("Ett av talen gick inte att addera.");
                    else
                        printf("\n%f", sum( atof(argv[1]), atof(argv[2])));
        
    return 0;
    }

