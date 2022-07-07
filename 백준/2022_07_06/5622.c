#include <stdio.h>
int main(void){
    int i=0;
    char word[15];
    int sum=0;
    scanf("%s",word);
    while(word[i]!='\0'){
        if(word[i]=='A'||word[i]=='B'||word[i]=='C'){
            sum+=3;
        }
        if(word[i]=='D'||word[i]=='E'||word[i]=='F'){
            sum+=4;
        }
        if(word[i]=='G'||word[i]=='H'||word[i]=='I'){
            sum+=5;
        }
        if(word[i]=='J'||word[i]=='K'||word[i]=='L'){
            sum+=6;
        }
        if(word[i]=='M'||word[i]=='N'||word[i]=='O'){
            sum+=7;
        }
        if(word[i]=='P'||word[i]=='Q'||word[i]=='R'||word[i]=='S'){
            sum+=8;
        }
        if(word[i]=='T'||word[i]=='U'||word[i]=='V'){
            sum+=9;
        }
        if(word[i]=='W'||word[i]=='X'||word[i]=='Y'||word[i]=='Z'){
            sum+=10;
        }
        i++;
    }
    printf("%d",sum);
}