#include <stdio.h>
#include <string.h>

int main(void){
    int i=0,count=0;
    char str[1000000];
    char *gets(str,1000001);  
    for(i=0;i<1000001;i++){
        if(str[i]==' '){
            count++;
            if(str[i]==' '&&str[i+1]==' '){
                break;
            }
        }
    }
    printf("%s",count);
}