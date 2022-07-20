#include <stdio.h>

int main(void){
    int a,b;
    int i,j,k,l;
    scanf("%d %d", &a, &b);
    char board[a][b];
    for(i=0;i<a;i++){
        scanf("%s",&board[i]);
    }
    char chessboard_W[8][8];
    char chessboard_B[8][8];
    int check=1;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(check==1){
                chessboard_W[i][j]='W';
                chessboard_B[i][j]='B';
            }
            else{
                chessboard_W[i][j]='B';
                chessboard_B[i][j]='W';
            }
            check *=-1;
        }
        check *= -1;
    }
    int min=a*b;
    for(i=0;i<a-7;i++){
        for(j=0;j<b-7;j++){
            int Bnum=0,Wnum=0;
            for(k=0;k<8;k++){
                for(l=0;l<8;l++){
                    if(chessboard_B[k][l]!=board[i+k][j+l])
                        Bnum++;
                    else if(chessboard_W[k][l]!=board[i+k][j+l])
                        Wnum++;
                }
            }
            if(Bnum<min){
                min=Bnum;
            }
            if(Wnum<min){
                min=Wnum;
            }
        }
    }
    printf("%d ",min);
}