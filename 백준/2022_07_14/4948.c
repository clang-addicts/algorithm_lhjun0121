#include <stdio.h>

int arr[246913];
int main(void){
    arr[1]=arr[0]=1;
    int i,j;
    for(i=2;i<246913;i++){
        if(!arr[i]){
            for(j=i+i;j<246913;j+=i){
                arr[j]=i;
            }
        }
    }
    while(1){
        int N,count=0;
        scanf("%d",&N);
        if(!N){
            break;
        }
        for(i=N+1;i<=2*N;i++){
            if(!arr[i])
                count++;
        }
        printf("%d\n",count);
    }
}