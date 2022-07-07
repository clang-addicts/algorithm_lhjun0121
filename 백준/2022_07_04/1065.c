#include <stdio.h>

int same(int x){
    if(x%10-(x/10)%10==(x/10)%10-x/100)
        return 1;
    else
        return 0;
}

int main(void){
    int N,i;
    scanf("%d",&N);
    int arr[1001]={0,};
    int count=0;
    for(i=1;i<=N;i++){
        arr[i]=same(i);
        if(arr[i]==1)
            count+=1;
    }
    printf("%d",count);
}