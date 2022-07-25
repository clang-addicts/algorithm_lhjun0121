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
	int i,j=0,max=0;
    int cnt[2]={0,};
	for(i=0;i<n;i++){   //arr요소값들을 count인덱스값으로
		count[arr[i]+4000]++;
	}
	for(i=0;i<8001;i++){    //몇개가 최빈값인지 찾기
		if(count[i]>max){
			max=count[i];
		}
	}
	for(i=0;i<8001;i++){
		if(count[i]==max){
            cnt[j]=i-4000;
            j++;
            if(j==2)
                break;
        }
	}
    if(cnt[1]==0){
        return cnt[0];
    }
    else{
        return cnt[1];
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
	if(sum/(double)N<0.5&&sum/(double)N>-0.5){
        printf("0\n");
    }
    else{
        printf("%.0f\n",sum/(double)N);
    }
	printf("%d\n",arr[N/2]);
	printf("%d\n",mode(N));
	printf("%d",arr[N-1]-arr[0]);
	return 0;
}