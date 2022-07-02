#include <stdio.h>
int main(void){
    int i,x,a,b;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
}