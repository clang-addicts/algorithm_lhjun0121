#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int year;
	char name[101];
	int cnt;
}person;

person arr[100001];

int compare(person* A, person* B){
	int i,j;
    person a=*(person*)A;    
    person b=*(person*)B; 
    if(a.year>b.year){
    	return 1;
	}
	else if(a.year<b.year){
		return -1;
	}
	else{
		if(a.cnt<b.cnt){
			return -1;
		}
		else{
			return 1;
		}
		return 0;
	}
}


int main(void){
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %s", &arr[i].year, arr[i].name);
		arr[i].cnt=i;
	}
	qsort(arr,n,sizeof(arr[0]),compare);
	for(i=0;i<n;i++){
		printf("%d %s\n",arr[i].year, arr[i].name);
	}
    return 0;
}