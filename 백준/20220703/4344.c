#include <stdio.h>
int main(void){
    int grade,std,point,i,j;
    scanf("%d",&grade); //클래스 수
    for(i=0;i<grade;i++){
        scanf("%d",&std);   //학생 수
        int point[std]; //학생들 각 점수
        int count=0;
        float sum=0;
        float per;
        for(j=0;j<std;j++){
            scanf("%d",&point[j]);
            sum+=point[j];
        }
        float avg=sum/std;
        for(j=0;j<std;j++){
            if(point[j]>avg){
                count++;
            }
        }
        per=(float)count/(float)std*100;
        printf("%.3f%%\n",per);
    }
}