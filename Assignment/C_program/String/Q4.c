//Write a program in C to count the total number of words in a string.
#include <stdio.h>
int main()
{
    char str[100];
    int i,words=0;
    printf("Enter  the string : ");
    gets(str);
    for(i=0;str[i];i++){
    	if(str[i]==32)
    	 words++;
 	}
 	if(i>0)
 	 words++;
    printf("no of words in string = %d\n",words);
}
