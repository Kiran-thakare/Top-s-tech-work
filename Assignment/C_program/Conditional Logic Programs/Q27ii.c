//ii. Vowel or Consonant using switch case
#include<stdio.h>
int main(){
    char ch;
    printf("Enter vowel :");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
        printf("This Is Vowel ");
        break;
     case 'e':
        printf("This Is Vowel");
        break;
     case 'i':
        printf("This Is Vowel ");
        break;
     case 'o':
        printf("This Is Vowel");
        break;
     case 'u':
        printf("This Is Vowel");
        break;

    default:
        printf("Your Entered Charcter As Consonants :%c",ch);
        break;
    }
}
