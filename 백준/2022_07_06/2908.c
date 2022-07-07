#include <stdio.h>
int reverse(int num){
    int hund,ten,one,new;
    one=num%10;
    num/=10;
    ten=num%10;
    num/=10;
    hund=num;
    new=100*one+10*ten+hund;
    return new;
}

int main(void){
    int a,b;
    scanf("%d %d", &a, &b);
    if(reverse(a)>reverse(b)){
        printf("%d",reverse(a));
    }
    else if(reverse(a)<reverse(b)){
        printf("%d",reverse(b));
    }
    return 0;
}