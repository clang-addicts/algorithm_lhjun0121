#include <stdio.h>
int main(void){
    int t,w,h,n,count=0;
    int i,j,k;
    scanf("%d",&t);
    int num[h][w];
    for(i=0;i<t;i++){
        scanf("%d %d %d", &h, &w, &n);
        for(j=0;j<w;j++){
            for(k=0;k<h;k++){
                count++;
                if(count==n){
                    printf("%d\n",100*(k+1)+(j+1));
                }
            }
        }
        count=0;
    }
    return 0;
}