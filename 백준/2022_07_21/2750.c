#include <stdio.h>

int main(void){
    int n, i, j;
    int num1,num2;
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++){
        for(i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                num1=arr[i];
                num2=arr[i+1];
                arr[i+1]=num1;
                arr[i]=num2;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}