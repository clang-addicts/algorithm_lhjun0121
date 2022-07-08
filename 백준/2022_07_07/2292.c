#include <stdio.h>

int floor(int n){	//해당 층까지의 개수 
	int i,sum=0;
	if(n==1){
		return 1;
	}
	else{
		for(i=1;i<n;i++){
			sum+=6*i;
		}
		return sum+1;
	}
}

int main(void){
	int num,i;
	scanf("%d",&num);
	if(num==1){
		printf("1");
	}
	else{
		for(i=1;;i++){
			if(num>floor(i)&&num<=floor(i+1)){
				printf("%d",i+1);
                break;
			}
		}
	}
	return 0;
}