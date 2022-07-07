#include <stdio.h>
int main(void){
    int x;
    scanf("%d",&x);
    if(90<=x){
        printf("A");
    }
    else if(80<=x){
        printf("B");
    }
    else if(70<=x){
        printf("C");
    }
    else if(60<=x){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}