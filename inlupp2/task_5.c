#include <stdio.h>
#include <stdlib.h>
#include <string.h>


double langd(int k, double a[], double b[], double c[]){
    double val;
    if (k%3==0){
        val = ((a[1] * b[2]) - (b[1] * a[2]));
}
    else if (k%3==1){
            val = ((a[2] * b[0]) - (a[0] * b[2]));
    }
        else{
             val = ((a[0] * b[1]) - (a[1] * b[0]));
        }
    
    double *pval=&val;
    c[k]=*pval;
    printf("%f ", c[k]);
    return c[k];
}

int main(int argc, char *argv[]){//Kollar om vi har rätt antal argument

 
    double a[3]={'\0'};
    double b[3]={'\0'};
    double c[3]={'\0'};
  
    for (int i=0;i<3;i++){

            a[i]=atof(argv[i+1]);
          
        }
       for (int x=0; x<3;x++){
            b[x]=atof(argv[x+4]);
          
}
    
            
        
    
    for (int k=0; k<3; k++){
        langd(k,a,b,c);
        
    }
 }