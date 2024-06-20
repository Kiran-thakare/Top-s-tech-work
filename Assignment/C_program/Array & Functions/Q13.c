// WAP to accept 5 students name and store it in array
#include <stdio.h>
#include <string.h>
int main() {
    char studentNames[5][50];
    int i;
     printf("Enter names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s", studentNames[i]);
    }
    printf("Student names stored in the array:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, studentNames[i]);
    }
}
