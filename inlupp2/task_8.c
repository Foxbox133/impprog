#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  typedef struct image{
        int px_val;
        int px_w;
        int px_h;
        int imgsz[500*500];
    } image;


void itbv(image I,unsigned int c){
    printf("%u \n", c);
    itbv(I, c+1);
}
void itbp(const image * I,unsigned int c){
    printf("%u\n", c);
    itbp(I,c+1);
}

int main(){

  image I;
  I.px_w=50;
  I.px_h=50;

  itbv(I,0);
}