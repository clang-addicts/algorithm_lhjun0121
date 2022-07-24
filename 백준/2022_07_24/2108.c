#include <stdio.h>
#include <stdlib.h>

int arr[500000];

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

int mode(int n){
	int count[8001]={0,};
	int i,nct=0,max=0;
	for(i=0;i<n;i++){
		count[arr[i]+4000]++;
	}
	for(i=0;i<n;i++){
		if(count[i]>=max){
			max=count[i];
		}
	}
	for(i=0;i<n;i++){
		if(count[i]==max);
	}
}

int main(void){
	int N,i,sum=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	qsort(arr,N,sizeof(int),compare);
	printf("%.0f\n",(float)sum/N);
	printf("%d\n",arr[N/2]);
//	printf("%d\n",mode(N));
	printf("%d",arr[N-1]-arr[0]);
	return 0;
}