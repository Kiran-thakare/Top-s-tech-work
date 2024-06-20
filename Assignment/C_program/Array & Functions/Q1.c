//1. Write a program to find out the max number from given array using function
#include <stdio.h>
int Max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int n,myArray[n];
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &myArray[i]);
    }

    int maximum = Max(myArray, n);
    printf("The maximum element in the array is: %d\n", maximum);

    return 0;
}

