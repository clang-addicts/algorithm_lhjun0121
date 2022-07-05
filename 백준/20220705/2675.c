#include <stdio.h>
int main(void){
    int test,again,i,k;
    char word[160];
    scanf("%d",&test);
    for(i=0;i<test;i++){    
        scanf("%d %s",&again,word);
        int j=0; 
        while(word[j]!='\0'){
            for(k=0;k<again;k++){
                printf("%c",word[j]);
            }
            j++;
        }
        printf("\n");
    }
}