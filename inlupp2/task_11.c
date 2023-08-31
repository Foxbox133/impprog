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

image* blur_img(image*I){
    int pixel_height=I->px_h;
    int pixel_width=I->px_w;

    image I_blurred;
    int temp_num=0;
    int tile_number=0;
    for(int i=0;i<(pixel_height*pixel_width);i++){
       
//top left
        if (i==0) {
                               
        }
/*left side*/if (){
            
        }
/*top side*/if (i%pixel_width>0 && i%pixel_width<(pixel_width-1)){
            
        }
/*bottom left corner*/if (){
            
        }
/*top right corner*/if (){
            
        }
/*bottom side*/if (){

        }
/*right side*/if (){

        }
/*bottom right corner*/if (i==pixel_height*pixel_width-1){

        }
/*rest*/else {

        }
    }
    return &I_blurred;
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
        printf("inte rätt filtyp");
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
    blur_img(&I);

    FILE*file_pog=fopen("poggers.pgm", "w"); //skapar en ny pgm fil som vi kan skriva in den trösklade filen i
    fprintf(file_pog, "%s\n%d %d\n%d\n", "P2", I.px_w, I.px_h, I.px_max_val);//skriver in filformat, bredd, höjd, och max pixelvärde i den nya filen
    printf("%s\n%d %d\n%d\n", "P2", I.px_w, I.px_h, I.px_max_val);
    for(int i=0;i<(I.px_h*I.px_w);i++){ //går igenom image-arrayen och skriver
        if (i%I.px_w==(I.px_w-1)){
            fprintf(file_pog,"%d\n",I.pixel_arr[i]); //skriver
        }
        else{
            fprintf(file_pog,"%d ",I.pixel_arr[i]);
        }
        
        
    }

} 