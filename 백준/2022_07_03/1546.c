#include <stdio.h>
int main(void){
    int a,max=0,best,i;
    float avg=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
        	max=arr[i];
        	best=i;
		}
    }
    for(i=0;i<a;i++){
    	avg+=(float)arr[i]/max*100/a;
	}
	printf("%.5f",avg);
}