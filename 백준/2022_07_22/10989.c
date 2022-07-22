#include <stdio.h>

int main(void){
    int n, i, j;
    int cnt=0,max=0;
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++){       //input data 만들기
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){   //최대값 설정
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int cntarr[max+1]={0,};
    for(i=0;i<n;i++){       //Count Array 에 배열
        cntarr[arr[i]]++;
    }
    for(i=1;i<max+1;i++){   //sort data 출력
        while(cntarr[i]!=0){
            printf("%d\n",i);
            cntarr[i]--;
        }
    }
}