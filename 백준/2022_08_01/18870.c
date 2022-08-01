#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x;
	int cnt;
}coord;

coord arr[1000001];

int main(void){
	int i,j;
	
	int tmp,N;
	
	scanf("%d", &N);
	
	for(i=0 ; i<N ; i++){
		scanf("%d", &arr[i].x);
		arr[i].cnt = 0;
	}
	for(i=0;i<N;i++){
		for(j=0 ; j<N ; j++){
			if(arr[i].x > arr[j].x){
				arr[i].cnt++;
			}
		}
	}
	
	for(i=0;i<N;i++){	//출력 
		printf("%d ",arr[i].cnt);
	}
	return 0;
}