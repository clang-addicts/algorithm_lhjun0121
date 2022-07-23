#include <stdio.h>
#include <stdlib.h>

int compare(const void*a, const void*b){
    int num1=*(int*)a;    
    int num2=*(int*)b;    
    if (num1<num2)   
        return -1;      
    if (num1>num2)    
        return 1;    
    return 0;  
}

int main(void){
    int i,n,a,b;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,sizeof(arr)/sizeof(int),sizeof(int),compare);
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}