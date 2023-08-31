#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX_size 500

  typedef struct image{
        
        int *px_val;
        int *px_w;
        int *px_h;
        int imgsz[MAX_size*MAX_size];
    } image;

    int read_img(const char*filename, image*I){
        int c=0;
        char buffer[3];
        char *dest;
        int a;
        
        FILE *file = fopen(filename ,"r");
        if ((file==NULL)||(errno!=0)){
            perror("Han inte öbbna för Error: ");
            return 0;
        }
        //fscanf (file, "%s", buffer);
        fscanf (file, "%s %d %d %d", buffer, (I->px_w),(I->px_h),(I->px_val));
        
          if ((strcmp(buffer, "P2") == 0) ){
                while(fscanf(file,"%d",&a)==1){
                    I->imgsz[c]=a;
                    if (c==0){
                    printf("%d\n",a);
                    }
                    c++;
                }
            }
            else {
                printf("nort funnr " );
            }

       // fscanf(file,"%s\n%d %d\n%d",&(I->buffer), &(I->px_w),&(I->px_h),&(I->px_val));
       // while(fscanf(file,"\n\n\n%d", &(I->px_val))!=EOF){
         //       (I)->imgsz[c]=a;
           //     c++;
             //   printf(" %s ",a);
        //}
        
        
        printf("px_w:%ls px_h:%ls px_val:%ls ", I->px_w,I->px_h,I->px_val);
    
        
        fclose(file);
       return 1; 
   }

int main(){
    image I;
    int g=read_img("D:\\bilder_improg\\gradient.pgm", &I);
}
