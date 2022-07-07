#include <stdio.h>
int main(void){
    int max=-1000000,min=1000000,a,x,i;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d",&a);
        if(a>max){
            max=a;
        }
        if(a<min){
            min=a;
        }
    }
    printf("%d %d",min,max);
}