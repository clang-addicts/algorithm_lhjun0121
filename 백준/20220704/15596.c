#include <stdio.h>

long long sum(int *a, int n){
    long long SUM=0;
    int i;
    for(i=0;i<n;i++){
        SUM+=a[i];
    }
    return SUM;
}
