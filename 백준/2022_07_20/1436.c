#include <stdio.h>
 
int i;
int a, b, count=1;
int main(void){
    int num;
    scanf("%d", &num);
    if(num==1){
        printf("666");
        return 0;
    }
    for(i=667;; i++){
        a=i;
        b=0;
        while(a){
            if(a%1000==666){
                b=1;
            }
            a/=10;
        }
        if(b){
            count++;
            if(count==num){
                break;
            }
        }
    }
    printf("%d\n", i);
}