// 26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
int main(){
    int st,end=10,sum=0;
    for(st=1;st<=end;st++){
        for(int j=0;j<=st;j++){
            sum+=j;
        }
    }
    printf("the Series Of Sum is (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n):-%d ",sum);
}
