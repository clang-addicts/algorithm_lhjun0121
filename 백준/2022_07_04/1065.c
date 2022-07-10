#include <stdio.h>

int same(int x){
    int a=x/100;
    int b=(x/10)%10;
    int c=x%10;
    if(a-b==b-c)
        return 1;
    else
        return 0;
}

int main(void){
    int N,i,count=0;
    scanf("%d",&N);
    if(N<100){
        printf("%d",N);
    }
    else{
        for(i=100;i<N+1;i++){
            if(same(i)==1){
                count++;
            }
        }
    printf("%d",count+99);
    }
}