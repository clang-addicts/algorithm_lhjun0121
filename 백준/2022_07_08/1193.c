#include <stdio.h>

int nfloor(int n){	//n층까지의 개수 
	int sum=0,i;
	for(i=1;i<=n;i++){
		sum+=i;
	}
	return sum;
}

int up(int n){	//n번째 분자 
	int i;
	int num;
	if(n==1){
		return 1; 
	}
	else{
		for(i=1;;i++){
			if(n>nfloor(i)&&n<=nfloor(i+1)){
				if((i+1)%2==0){
					num=n-nfloor(i);
					break;
				}
				else{
					num=(i+2)-(n-nfloor(i));
					break;
				}
			}
		}
		return num;
	}
}

int down(int n){	//n번째 분모 
	int i;
	int num;
	if(n==1){
		return 1; 
	}
	else{
		for(i=1;;i++){
			if(n>nfloor(i)&&n<=nfloor(i+1)){
				if((i+1)%2==0){
					num=(i+2)-(n-nfloor(i));
					break;
				}
				else{
					num=n-nfloor(i);
					break;
				}
			}
		}
		return num;
	}
}

int main(void){
	int x;
	scanf("%d",&x);
	printf("%d/%d",up(x),down(x));
}