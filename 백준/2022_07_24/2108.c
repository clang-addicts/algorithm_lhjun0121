#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int arr[500001];

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

int avg(int arr[],int n)
{
	double sum=0;
	int i;
	for(i=0;i<n;i++)
	{
		sum+=(arr[i]);
	}
	return round(sum/n);
}

int mode(int n){
	int count[8001]={0,};
	int i,j=-1,max=0,MAX;
    int cnt[4000]={0,};
	for(i=0;i<n;i++){
		count[arr[i]+4000]++;
	}
	for(i=0;i<8001;i++){
		if(count[i]>max){
			max=count[i];
		}
	}
	for(i=0;i<8001;i++){
		if(count[i]==max){
            MAX=i-4000;
            if(j==1){
            	break;
            }
            j*=-1;
        }
	}
	return MAX;
}

int main(void){
	int N,i,sum=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	qsort(arr,N,sizeof(int),compare);
    printf("%d\n",avg(arr,N));
	printf("%d\n",arr[(N-1)/2]);
	printf("%d\n",mode(N));
	printf("%d",arr[N-1]-arr[0]);
	return 0;
}