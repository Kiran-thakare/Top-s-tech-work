#include <stdio.h>
#include <string.h>

int main() {
    char schoolName[50];
    char abbreviation[10];

    printf("Enter the full school name: ");
    scanf("%s", schoolName);
    int len = strlen(schoolName);
    int abbrIndex = 0;
    for (int i = 0; i < len; i++) {
        if (i == 0 || schoolName[i - 1] == ' ') {
            abbreviation[abbrIndex++] = schoolName[i];
        }
    }
    abbreviation[abbrIndex] = '\0';
    printf("Abbreviation: %s\n", abbreviation);
    return 0;
}
