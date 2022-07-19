#include <stdio.h>

int main(void){
    int a,b;
    int i,j,k;
    int sum,num=0;
    scanf("%d %d",&a,&b);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++){
            for(k=j+1;k<a;k++){
                sum=arr[i]+arr[j]+arr[k];
                if(sum<=b&&sum>num){
                    num=sum;
                }
            }
        }
    }
    printf("%d",num);
}