#include <stdio.h>
int main(void){
    int hour,min,time;
    scanf("%d %d %d",&hour ,&min, &time);
    min+=time;
    if(min>59){
        hour+=min/60;
        min%=60;
    }
        if(hour>23){
        hour-=24;
    }
    printf("%d %d",hour,min);
}