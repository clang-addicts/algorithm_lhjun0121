#include <stdio.h>

int main(void){
    char OX[80];
    int x,i;
    scanf("%d",&x);
    for(i=0;i<x;i++){   //퀴즈 수
        int a=0,b=1,c=0;
        scanf("%s",OX);    
        while(OX[c]!='\0'){
            if(OX[c]=='O'){
                a+=b++;
            }
            else 
            {
                b=1;
            }
            c++;
        }
        printf("%d\n",a);
    }
}