#include <stdio.h>
#include <string.h>
 
int main(void){
	int i;
    char a_str [10002]; 
    char b_str [10002];
    scanf("%s %s", a_str, b_str);
    int a_len = strlen(a_str);
    int b_len = strlen(b_str);
 
    int min_len, max_len;
    if(a_len < b_len){
        min_len = a_len;
        max_len = b_len;
    }
    else{
        min_len = b_len;
        max_len = a_len;
    }
 
    int A[10002];
    int B[10002];
    for(int count=0; count<10002; count++){
        A[count] = a_str[count]-'0';
        B[count] = b_str[count]-'0';
    }
 
    int sum [max_len];
    for(int num=0; num<max_len; num++){
        sum[num] = 0;
    }
 
    for(int i=0; i<min_len; i++){
        int a = A[a_len-1-i];
        int b = B[b_len-1-i];
 
        int digit = (sum[i]+a+b)%10;
        int cnt=0;
        if(sum[i]+a+b>=10)
            cnt=1;
        
        sum[i] = digit;
        if(min_len==max_len && i==min_len-1){
            sum[i] += cnt*10; 
        }
        else{
            sum[i+1] += cnt;
        }
    }

    for(i=min_len; i<max_len; i++){
        if(a_len < b_len){
            sum[i]+=B[max_len-1-j];
        }  
        else
            sum[i]+=A[max_len-1-j];
 
        if(sum[i]>=10 && i!=max_len-1){
            sum[i]=sum[i]%10;
            sum[i+1]+=1;
        }
    }
 
    for(i=0; i<max_len; i++){
        printf("%d", sum[max_len-1-i]);
    }
}