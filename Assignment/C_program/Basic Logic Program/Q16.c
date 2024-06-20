//Convert country’s name in abbreviate form
#include <stdio.h>
int main() {
    char countryName[50];
    char abbreviation[3];

    printf("Enter the full country name: ");
    scanf("%s", countryName);

    abbreviation[0] = countryName[0];
    abbreviation[1] = countryName[1];
    abbreviation[2] = '\0';

    printf("Abbreviation: %s\n", abbreviation);
    return 0;
}
