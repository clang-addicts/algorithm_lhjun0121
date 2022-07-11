#include <stdio.h>

int main(void){
    int i,N;
    int nat,count=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&nat);
        if(nat==1){
            continue;
        }
        else if(nat==2||nat==3){
            count++;
        }
        else if(nat%2!=0&&nat%3!=0){
            count++;
        }
    }
    printf("%d\n",count);
}