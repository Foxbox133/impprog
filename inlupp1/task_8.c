#include <stdio.h>

int main(){
    int user_hour;
    int user_minutes;
    scanf("%d%d", &user_hour,&user_minutes);
    int i=0;
    int t=0;
    while(i<=user_hour){
        t=0;
        while (t<=50){
                if (i>=user_hour && t>user_minutes){
                    break;
                }
                else if (t%10==0){
                    printf("%02d:", i);
                    printf("%02d\n", t);
                    
                }
            t++;
            
        } 
        i++;
        
    }
}