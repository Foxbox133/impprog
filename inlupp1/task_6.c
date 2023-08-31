#include <stdio.h>

int main(){
    int user_hour;
    int user_minutes;
    scanf("%d%d", &user_hour,&user_minutes);
    for (int i =0; i<=user_hour; i=i+1)
        for (int t=0; t<=50; t=t+1)
            if (i>=user_hour && t>user_minutes)
                break;
            else if (t%10==0){
                printf("%02d:", i);
                printf("%02d\n", t);}
        
}
