#include <stdio.h>
int main(void)
{
	int high,cmb,fall,day;
	int i;
	scanf("%d %d %d", &cmb, &fall, &high);
	day=(high-fall-1)/(cmb-fall)+1;
	printf("%d",day);
}