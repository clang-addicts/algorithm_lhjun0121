#include <stdio.h>
int main(void){
    int a,b,c;
    long long i;
    scanf("%d %d %d",&a,&b,&c);
    if(b>=c){
            i=-1;
    }
    else{
        i=a/(c-b)+1;
    }
    printf("%d",i);
}