#include <stdio.h>
int main(void){
    int a,i;
    int sum=0;
    char b[100];
    scanf("%d %s",&a,b);
    for(i=0;i<a;i++){
        sum+=b[i]-'0';
    }
    printf("%d",sum);
    return 0;
}