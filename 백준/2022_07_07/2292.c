#include <stdio.h>
int main(void){
    int num,i;
    int plus=0; // 각 층의 개수
    int floor=0; //층 수
    int sum;    //현재 층까지의 개수
    scanf("%d",&num);
    for(i=0;;i++){
        plus+=6;
        floor++;
        if(num==1){
            floor=1;
        }
    }
}