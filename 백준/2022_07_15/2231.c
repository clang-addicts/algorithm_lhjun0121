#include <stdio.h>

int maker(int n){
    int sum=n;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(void){
    int i;
    int a;
    scanf("%d",&a);
    for(i=1;i<=1000000;i++){
        if(maker(i)==a){
            printf("%d",i);
            break;
        }
        if(maker(i)>1000000){
            printf("0");
            break;
        }
    }
}