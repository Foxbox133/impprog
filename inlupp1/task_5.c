#include <stdio.h>

int main(){
    for (int i =1; i<21; i=i+1)
        if(i%5==0 || i%2==0)
        printf("%d ", i);
}
