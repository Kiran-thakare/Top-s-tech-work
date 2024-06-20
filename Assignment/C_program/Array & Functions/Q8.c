//WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int len,i,temp=0;
    printf("Enter String:");
    gets(str);
    len=strlen(str);
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            temp=1;
            break;
        }
    }
    printf("\n revrse:%s",str);
    if(temp==0){
        printf("\n Given String=%s is Palindrome",str);
    }
    else{
        printf("\n Given String=%s is not Palindrome",str);
    }
}
