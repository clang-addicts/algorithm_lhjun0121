#include <stdio.h>
int main(void){
    int num;
    scanf("%d",&num);
    int count=0;
    while(num>0){
        if(num%5==0){
            num-=5;
            count++;
        }
        else if(num%3==0){
            num-=3;
            count++;
        }
        else{
            num-=3;
            count++;
        }
        if(num==2||num==1){
            count=-1;
            break;
        }
    }
    printf("%d",count);
}