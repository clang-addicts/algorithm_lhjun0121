#include <stdio.h>

int main(void){
    int a,b,c,result,sum,i=0;
    scanf("%d",&sum);
    result=sum;
    while(1){
        a= sum%10;
        b= sum/10 + sum%10;
        c= a*10 + b%10;
        sum=c;
        i++;
        if(sum==result){
            break;
        }
    }
    printf("%d",i);
    return 0;
}