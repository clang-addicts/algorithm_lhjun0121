#include<stdio.h>
 
int count[10001]={0,};  //계수 정렬

int main(void){
	int i,j,n,num;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        count[num]++;
    }	
    for(i=0;i<10001;i++){
        if(count[i]==0)
            continue;
        for(j=0;j<count[i];j++){
            printf("%d\n",i);
        }
    }
	return 0;
}