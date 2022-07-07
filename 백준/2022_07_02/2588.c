#include <stdio.h>
int main(void){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n%d\n%d\n%d",x*(y%10),x*((y%100)-(y%10))/10,x*(y/100),x*y);
    return 0;
}