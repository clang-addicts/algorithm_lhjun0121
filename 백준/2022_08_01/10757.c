#include <stdio.h>
#define MAX 10002

char a_arr[MAX];
char b_arr[MAX];
int ans[MAX+1]={0,};

void reverse(char arr[], int N){
	int i,j;
	int tmp;
	for(i=0;i<N/2;i++){
		tmp=arr[i];
		arr[i]=arr[N-i];
		arr[N-i]=tmp;
	}
}


int main(void){
	
	int i;
	
	scanf("%s", &a_arr[MAX]);
	scanf("%s", &b_arr[MAX]);
	
	reverse(a_arr, sizeof(a_arr));
	reverse(b_arr, sizeof(b_arr));
	
	for(i=0 ; i<MAX+1 ; i++){
		if(a_arr[i] + b_arr[i] >= 10){
			ans[i+1]+=1;
			ans[i]=(a_arr[i] + b_arr[i])%10;
		}
		else{
			ans[i]=(a_arr[i] + b_arr[i]);
		}
	}
	
	reverse(ans, sizeof(ans));
	
	for(i=0;i<MAX+1;i++){
		printf("%d",ans[i]);
	}
}