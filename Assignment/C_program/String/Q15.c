//. Write a program in C to find the largest and smallest words in a string
#include <stdio.h>
#include <string.h>
void trimWord(char word[]) {
    int len = strlen(word);
    int start = 0, end = len - 1;

    while (start < len && word[start] == ' ') {
        start++;
    }
    while (end >= 0 && word[end] == ' ') {
        end--;
    }
    for (int i = start; i <= end; i++) {
        word[i - start] = word[i];
    }
    word[end - start + 1] = '\0';
}
int main() {
    char inputString[1000];
    char largestWord[100], smallestWord[100];
    int largestLength = 0, smallestLength = 1000;
    printf("Enter a string: ");
    gets(inputString);
    char* token = strtok(inputString, " ");
    while (token != NULL) {
        trimWord(token);

        int wordLength = strlen(token);
        if (wordLength > largestLength) {
            largestLength = wordLength;
            strcpy(largestWord, token);
        }
        if (wordLength < smallestLength) {
            smallestLength = wordLength;
            strcpy(smallestWord, token);
        }
        token = strtok(NULL, " ");
    }
    printf("Largest word: %s\n", largestWord);
    printf("Smallest word: %s\n", smallestWord);
}
