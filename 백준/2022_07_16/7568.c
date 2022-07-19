#include <stdio.h>

int main(void){
    int i,j,num;
    int count=0;
    int x[50]={0,};
    int y[50]={0,};
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    for(i=0;i<num;i++){
       count=1;
        for(j=0;j<num;j++){
            if(x[i]<x[j]&&y[i]<y[j])
             count++;       
        }
        printf("%d ",count);
    }
}