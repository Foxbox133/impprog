#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#define MAX_size 500

  typedef struct image{
        
        int px_max_val;
        int px_w;
        int px_h;
        int pixel_arr[MAX_size*MAX_size];
    } image;

image* threshold_img(image*I){
       int threshold_val=120; //gränsvärdet som bestämmer om en pixel i vår bild ska vara vit eller svart
       
       for(int i=0;i<(I->px_h*I->px_w);i++){
            if (I->pixel_arr[i]<threshold_val){
                I->pixel_arr[i]=0;//allt mindre än threshold_val sätts till 0 
            }
            else{
                I->pixel_arr[i]=I->px_max_val; //allt större än threshold_val sätts till 255
            }
       }
       return I;
}

 
int main(int argc, const char *argv[]){
    image I;  
    const char *filename=argv[1];
    char buffer[3];
    
    FILE *file = fopen(filename ,"r"); //öppnar filen, om inte, returnera error
    if ((file==NULL)||(errno!=0)){
        perror("Han inte öbbna för Error: ");
        return 1;
    }
    fscanf(file, "%[^\n]", buffer); //scanna in en sträng med filtypen in i "buffer"
    if (strstr(buffer, "P2")==NULL){ //kollar om filtypen är rätt
        return 1;
    }
    fscanf(file, "%d %d %d", &(I.px_w),&(I.px_h),&(I.px_max_val)); //scannar in bredden, höjden, och maxvärdet på en pixel (värdet på vit)
    int temp_num=0; // temporär variabel som lagrar värdet på en pixel
    int count=0; // loop-varibel till array
    while (fscanf(file,"%d",&temp_num)==1){
        I.pixel_arr[count]=temp_num; //går igenom varje pixel och lägger in den i image-arrayen
        count++;
    }
    fclose(file);
    threshold_img(&I);

    FILE*file_threshold=fopen("threshold.pgm", "w"); //skapar en ny pgm fil som vi kan skriva in den trösklade filen i
    fprintf(file_threshold, "%s\n%d %d\n%d\n", "P2", I.px_w, I.px_h, I.px_max_val);//skriver in filformat, bredd, höjd, och max pixelvärde i den nya filen

    for(int i=0;i<(I.px_h*I.px_w);i++){ //går igenom image-arrayen och skriver
        if (i%I.px_w==(I.px_w-1)){
            fprintf(file_threshold,"%d\n",I.pixel_arr[i]); //skriver
        }
        else{
            fprintf(file_threshold,"%d ",I.pixel_arr[i]);
        }
        
        
    }

}