#include <stdio.h>

int main(void){
    int k,n,t;
    int i,j;
    int num[15][14];
    for(i=0;i<15;i++){
        num[i][0]=1;
    }
    for(i=0;i<14;i++){
        num[0][i]=i+1;
    }
    for(i=1;i<15;i++){
        for(j=1;j<14;j++){
            num[i][j]=num[i][j-1]+num[i-1][j];
        }
    }
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d\n%d", &k, &n);
        printf("%d\n",num[k][n-1]);
    }
}