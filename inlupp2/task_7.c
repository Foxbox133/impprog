//för varje substring i arrayen destination så ska samma index från source bytas substring
//tills att 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_copy( char *dup, const char *src ){
    int str_size;
    for (int k=sizeof(dup);k>0;k--){
    dup[k]= '\0';
    }
        str_size=strlen(src);
    for (int i=0;i<str_size;i++){
        if (src[i]!='\0'){
            dup[i]=src[i];
        }
        else{
            break;
        }
         
    }
    printf("%s %s",dup,src);
return 0;
    
}

int main(){
    

    char a[50];
    char b[50];
    scanf("%s%s",b,a);
   
    string_copy(a,b);
}