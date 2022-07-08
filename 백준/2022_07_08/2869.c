#include <stdio.h>
int main(void)
{
	int high,cmb,fall,day;
	int i;
	scanf("%d %d %d", &cmb, &fall, &high);
	if(high - cmb < cmb){
		printf("2");
	}
	else if(high - cmb == cmb){
		printf("3");
	}
	else{
		day = (high - cmb) / (cmb - fall) + 1;
		printf("%d",day);
	}
	return 0;
}