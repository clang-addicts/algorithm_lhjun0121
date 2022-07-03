#include <stdio.h>
int main(void){
    int a,b,i,count=0;
    int arr[10];
    int num[42]={0,};    //나머지 종류 확인
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
        num[arr[i]%42]=1;
    }
    for(i=0;i<42;i++){
        if(num[i]==1){
            count++;
        }
    }
    printf("%d",count);
}