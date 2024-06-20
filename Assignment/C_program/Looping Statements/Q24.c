//24. 1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main(){
    int start,end=10,sum=0;
    for(start=0;start<=end;start++){
        if(start!=end){
            printf("%d+",start,start);

        }
        else{
            printf("%d+",start,start);
        }
        sum=sum+start;
    }
    printf("The Sum Of No :%d",sum);
    }
