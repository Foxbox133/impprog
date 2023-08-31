#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#define MAX_size 500

  
int main(int argc, const char *argv[]){
 
    char arg_string[100]="cola";
   // strcpy(arg_string,argv[1]);
    
    int g;
    int k;
    char h;
    char y[] = "C:\\";
    int i=0; 
    while (y[i]!='\0') {
        i++;
    }
    for (int k=0;arg_string!='\0';k++, i++){
        y[i]=arg_string[k];
    }

 
    h=y;
}