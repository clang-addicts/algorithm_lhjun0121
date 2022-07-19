#include <stdio.h>

int main(void){
    int a,b,count=0;
    int i,j;
    scanf("%d %d", &a, &b);
    char board[a][b];
    for(i=0;i<a;i++){
        scanf("%s",&board[i]);
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            if(board[i][j]=='W'){
                count++;
            }
        }
}