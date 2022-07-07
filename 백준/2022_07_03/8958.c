#include <stdio.h>
int main(void){
    int point=1, sum=0;
    int x,i,j;
    scanf("%d",&x);
    char OX[80];
    for(i=0;i<x;i++){   //퀴즈 수
        scanf("%s",OX);    
        for(j=0;j<80;j++){  //문자열 길이
            if(OX[j]=='O'){
                if(OX[j-1]=='O'){
                    point+=1;
                }
                sum+=point;
            }
            else if(OX[j]=='X'){
                point=1;
            }
            if(OX[j]=='\0'){
                break;
            }
            point=1;
        }
        printf("%d\n",sum);
    }
    return 0;
}