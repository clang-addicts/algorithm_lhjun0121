#include<stdio.h>
#include<stdlib.h>

int N;

typedef struct coord {
	int x;
	int x1;
	int cnt;
} coord;

coord coords[1000020];

int compare(const void* a, const void* b){
	if (((coord*)a)->x < ((coord*)b)->x)
		return -1;
	else if (((coord*)a)->x > ((coord*)b)->x)
		return 1;
	else
		return 0;
}

int compare1(const void* a, const void* b) {
	if (((coord*)a)->cnt < (((coord*)b)->cnt))
		return -1;
	else if (((coord*)a)->cnt > ((coord*)b)->cnt)
		return 1;
	else
		return 0;
}

int main(void) {
	int i;
	scanf("%d",&N);

	for (i=0 ; i<N ; i++) {
		scanf("%d", &coords[i].x);
		coords[i].cnt=i;
	}

	qsort(coords, N, sizeof(coords[0]), compare);

	for (i = 0; i < N; i++) {
		
		if (i==0) {
			coords[i].x1=0;
		}
		else {
			if (coords[i - 1].x == coords[i].x) {
				coords[i].x1 = coords[i-1].x1;
			}
			else {
				coords[i].x1 = coords[i-1].x1+1;
			}
		}
	}

	qsort(coords, N, sizeof(coords[0]), compare1);

	for (i = 0; i < N; i++) {
		printf("%d ", coords[i].x1);
	}
	return 0;
}