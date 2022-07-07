#include <stdio.h>
int main(void){
    char word[100];
    scanf("%s",word);
    int i=0;
    int sum=0;
    while(word[i]!='\0'){
        if(word[i]=='c'&&word[i+1]=='='){
            sum+=1;
            i++;
        }
        else if(word[i]=='c'&&word[i+1]=='-'){
            sum+=1;
            i++;
        }
        else if(word[i]=='d'&&word[i+1]=='z'&&word[i+2]=='='){
            sum+=1;
            i+=2;
        }
        else if(word[i]=='d'&&word[i+1]=='-'){
            sum+=1;
            i++;
        }
        else if(word[i]=='l'&&word[i+1]=='j'){
            sum+=1;
            i++;
        }
        else if(word[i]=='n'&&word[i+1]=='j'){
            sum+=1;
            i++;
        }
        else if(word[i]=='s'&&word[i+1]=='='){
            sum+=1;
            i++;
        }
        else if(word[i]=='z'&&word[i+1]=='='){
            sum+=1;
            i++;
        }
        else{
            sum+=1;
        }
        i++;
    }
    printf("%d",sum);
}