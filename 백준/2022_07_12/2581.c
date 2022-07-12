#include <stdio.h>

int main(void){
    int i,j,a,b;
    int count=0;
    int min=10001;
    scanf("%d %d",&a, &b);
	for(i=a;i<=b;i++){
		int h=0;
		if(i==1){
			continue;
		}
   		for(j=2;j<i;j++){
    		if(i%j==0){
   				h=1;
			}
		}
		if(h==0){	
			count+=i;
			if(i<min){
				min=i;
			}
		}
	}
	if(count==0){
		printf("-1");
	}
	else{
		printf("%d\n%d",count,min);
	}
	return 0;
}