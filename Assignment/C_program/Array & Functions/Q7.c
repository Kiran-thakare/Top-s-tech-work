//WAP Find out length of string without using inbuilt function
#include<stdio.h>
int stringlength(const char *str){
     int length = 0;
while (str[length] != '\0'){
        length++;
    }
    return length;
}
int main(){
    char string[100];
    printf("Enter String :");
    scanf("%s",&string);
    int len=stringlength(string);
    printf("\n The Length of String :%d",len);

}
