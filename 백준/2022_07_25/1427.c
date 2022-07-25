#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int num1= *(int *)a;
    int num2= *(int *)b;
    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
        
    return 0;
}

int main(void){
    int i=0,num,count=0;
    scanf("%d",&num);
    int NUM=num;
    while(NUM>0){
        NUM/=10;
        count++;
    }
    int arr[count];
    for(i=0;i<count;i++){
        arr[i]=num%10;
        num/=10;
    }
    qsort(arr,count,sizeof(int),compare);
    for(i=count-1;i>=0;i--){
        printf("%d",arr[i]);
    }
}