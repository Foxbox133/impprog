#include <stdio.h>
#define pi 3.1415 

int main(){
    double radie ;
    printf("Radie?\n");
        //läser och sparar radien
    scanf("%lf", &radie);
    	
	
	double O = (double)2 * pi * radie;
	double A = pi * radie * radie;
	
printf("Omkrets = %lf\nArea = %lf\n", O , A );
}


