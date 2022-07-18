#include <stdio.h>

int fact(int n){
    if(n==1){
        return 1;
    }

    return n*fact(n-1);
}

int main(void){
    int N;
    scanf("%d",&N);
    if(N==0){
        printf("1");
    }
    else
        printf("%d\n", fact(N));
    return 0;
}