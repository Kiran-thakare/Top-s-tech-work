//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
int main(){
   int start,end=5,sum=0;
    for(start=0;start<=end;start++){
        if(start!=end){
            printf("(%d * %d )+",start,start);

        }
        else{
            printf("(%d * %d )+",start,start);
        }
        sum+=(start*start);
    }
    printf("%d",sum);
    }
