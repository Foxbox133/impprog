#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#define MAX_size 500

  typedef struct image{
        
        int px_val;
        int px_w;
        int px_h;
        int imgsz[MAX_size*MAX_size];
    } image;

    int read_img(const char*filename, image*I,int *g, int *k){
        int c=0;
        char buffer[3];
        int a;
        FILE *file = fopen(filename ,"r");
        if ((file==NULL)||(errno!=0)){
            perror("Han inte öbbna för Error: ");
            return 0;
        }
        //fscanf (file, "%s", buffer);
        fscanf (file, "%s %d %d %d", buffer, &(I->px_w),&(I->px_h),&(I->px_val));
        
          if ((strcmp(buffer, "P2") == 0) ){
                while(fscanf(file,"%d",&a)==1){
                    I->imgsz[c]=a;
                    if (c==0){
                    *g=a;
                    }
                    c++;
                }
                *k=a;
            }
            else {
                printf("nort funnr " );
            }
    
        
        fclose(file);
       return 1; 
   }

int main(int argc, const char *argv[]){
    image I;  
    int g;
    int k;
    const char *h=argv[1];
    //printf("%s", h);
    read_img(h, &I, &g, &k);
    printf("%d %d", g, k);
}