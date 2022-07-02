#include <stdio.h>
int main(void){
    int x,i,sum=0;
    scanf("%d",&x);
    for(i=1;i<x+1;i++){
        sum+=i;
    }
    printf("%d",sum);
}