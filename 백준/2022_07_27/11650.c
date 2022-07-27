#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x;
	int y;
}coord;

int compare(const void*A, const void*B){
    coord a=*(coord*)A;    
    coord b=*(coord*)B;    
    if (a.x>b.x)   
        return 1;      
    else if(a.x==b.x){
    	if(a.y>b.y){
    		return 1;
		}
		else{
			return -1;
		}
	}
	else{
		return -1;
	}
}

int main(void){
	int i,j,N;
	scanf("%d",&N);
	coord arr[N];
	for(i=0;i<N;i++){
		scanf("%d %d", &arr[i].x,&arr[i].y);
	}
	qsort(arr,N,sizeof(coord),compare);
	for(i=0;i<N;i++){
		printf("%d %d\n",arr[i].x,arr[i].y);
	}
}