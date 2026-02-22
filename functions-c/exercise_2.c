#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** ------------- Exercise 2 - Functions -----------------
 * Write a C program that:
 * - Use a function to compute the max value of an array
 */

int arrayMax(int *, int);

int main() {

    int arrayLength = 0;

    do {
        printf("Insert the array length: ");
        scanf("%d", &arrayLength);
        if (arrayLength <= 0) {
            printf("Invalid array length!\n");
        }
    } while (arrayLength <= 0);

    int numbers[arrayLength];

    srand(time(NULL));

    for (int i = 0; i < arrayLength; i++) {
        numbers[i] = rand() % 100;
    }

    printf("Generated array: [");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d", numbers[i]);
        if (i < arrayLength - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    int maxValue = arrayMax(numbers, arrayLength);

    printf("The max value of the array is: %d\n", maxValue);

    return 0;
}

int arrayMax(int *array, int arrayLength) {
    int maxValue = array[0];

    for (int i = 1; i < arrayLength; i++) {
        if (array[i] > maxValue) {
            maxValue = array[i];
        }
    }

    return maxValue;
}

