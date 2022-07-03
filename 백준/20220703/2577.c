#include <stdio.h>
int main(void){
    int a,b,c,i,count,x;
    int num[10]={0,};
    scanf("%d %d %d",&a, &b, &c);
    x=a*b*c;
    while(x!=0){
        count=x%10;
        num[count]++;
        x/=10;
    }
    for(i=0;i<10;i++){
        printf("%d\n",num[i]);
    }
    return 0;
}