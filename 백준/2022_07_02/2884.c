#include <stdio.h>
int main(void){
    int hour, min;
    scanf("%d %d",&hour, &min);
    if(min<45){
        hour-=1;
        min+=15;
        if(hour<0){
            hour+=24;
        }
    }
    else{
        min-=45;
    }
    printf("%d %d",hour,min);
}