#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rim(char *a,char *b){
    int x=strlen(a)-3;
    int y=strlen(b)-3;
    char c[5]={'\0'};
    char d[5]={'\0'};
    int ret_val;
    int count_1=0;
    int count_2=0;
   
  
    if (((strlen(a))<3) || ((strlen(b))<3)){
        ret_val=2;
    }
    else{
        for (int i=y;i<strlen(b);i++){
            d[i-y]=b[i];
            count_1++;
            
    
        }
      
        
        for (int i=x;i<strlen(a);i++){
            c[i-x]=a[i];
            count_2++;
       
    
        }
        
        if (strncmp(c,d,3)!=0){
            ret_val=1;
                    
                }
                else{
                    ret_val=0;
                }
            
        }
    
   return ret_val; 
}   


int main(int argc, char *argv[]){//Kollar om vi har rätt antal argusnt
    int main_ret;   
    int cond=rim (argv[1],argv[2]);
   
    if ((cond==2)||argc!=3){
                printf(" du måste skriva 2 ord med minst tre bokstäver\n");
                main_ret=2;
        
    }
    else if(cond==1){ 
        printf("nej\n");
        main_ret=1;
                
    }
        else{ 
            printf("ja\n");
            main_ret=0;
        }
          
return main_ret;
    
}