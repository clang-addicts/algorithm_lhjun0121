#include <stdio.h>

int main(void){
    int i,j,N;
    int nat,h,count=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&nat);
        h=0;
		if(nat==1){
			continue;
		}
    	for(j=2;j<nat;j++){
    		if(nat%j==0){
    			h=1;
			}
		}
		if(h==0){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}