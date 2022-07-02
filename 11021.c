#include <stdio.h>
int main(void){
    int i,x,a,b;
    scanf("%d",&x);
    for(i=1;i<x+1;i++){
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d\n",i,a+b);
    }
}