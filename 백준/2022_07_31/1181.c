#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int A;
    int B;
    A=strlen(a);
    B=strlen(b);
    if(A==B){
        return strcmp((char*)a, (char*)b);
    }
	else if(A>B){
        return 1; 
    }
	else{
        return -1;
    }
    return 0;
}

int main(void) {
    int num;
    int i;

    scanf("%d",&num);
    char word[num][51];

    for(i=0;i<num;i++){
        scanf("%s",word+i);
    }
    qsort(word,num,sizeof(word[0]),compare);

    for(i=0;i<num;i++){
        if(!strcmp(word+i,word+i+1)){
            continue;
        }
		else{
            printf("%s\n",word+i);
        }
    }
    return 0;
}