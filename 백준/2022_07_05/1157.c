#include <stdio.h>
int main(void){
    char word[1000000];
    scanf("%s",word);
    int i=0;
    while(word!='\0'){
        printf("%c",word);
        i++;
    }
}