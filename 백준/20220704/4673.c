#include <stdio.h>

int d(int n){
    int num=n;
    while(n>0){
        num+=n%10;
        n/=10;
    }
    return num;
}

int main(void){
    int i,count;
    int arr[10001]={0,};
    for(i=0;i<10001;i++){
        count=d(i);
        if(count<10001){
            arr[count]=1;
        }
    }
    for(i=0;i<10001;i++){
        if(arr[i]!=1){
            printf("%d\n",i);
        }
    }
}