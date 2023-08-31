#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int r;
    scanf("%d", &r);
    int s=0;
    int A;
    int i=0;
    int B=0;
    double epsilon = 0.0001;
    double x;
    double y;
      srand(time(NULL));
    for (i=0;i>epsilon;i++){
        B=A;
        if (rand()%2==0){
            x=(double)(rand())/RAND_MAX;
            y=(double)(rand())/RAND_MAX;
        }
        else{
            x=(double)-(rand())/RAND_MAX;
            y=(double)-(rand())/RAND_MAX;
        }
        if(((pow(x,2))+(pow(y,2)))<=(pow(r,2))){
           s=s+(2*pow(r,2));
        }
        epsilon=fabs(A-B);
        A=s/i;
        printf("%d",A);
    }
}