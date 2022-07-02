#include <stdio.h>

int main(void){
    int a,b,i,j;
    scanf("%d %d",&a, &b);
    for(i=0;i<a;i++){
        scanf("%d",&j);
        if(j<b){
            printf("%d ",j);
        }
    }
    return 0;
}