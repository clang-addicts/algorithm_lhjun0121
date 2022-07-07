#include <stdio.h>
int main(void){
    int arr[9]={0,};
    int max=0,i,count;
    for(i=0;i<9;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
            count=i;
        }
    }
    printf("%d\n%d",max,count+1);
}