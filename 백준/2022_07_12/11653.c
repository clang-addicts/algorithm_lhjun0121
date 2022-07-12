#include <stdio.h>

int main(void){
	int N;
	int i,j;
	scanf("%d",&N);
	while(split(N)!=1){
		if(N/split(N)==1){
			if(N==1){
				break;
			}
			printf("%d",N);
			break;
		}
		printf("%d\n",N/split(N));
		N=split(N);
	}
}

int split(int x){
	int i;
	for(i=2;i<x;i++){
		if(x%i==0){
			x/=i;
			break;
		}
	}
	return x;
}