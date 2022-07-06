#include <stdio.h>
int main(void){
    int i=0,count=0;
    char str[1000000];
    scanf("%s",&str);
    while(str[i]!='\0'&&str[i+1]!='\0'){
        if(str[i]=='\0'){
            count+=1;
            i++;
        }
        else{
            i++;
        }
    }
    printf("%d",count);
}