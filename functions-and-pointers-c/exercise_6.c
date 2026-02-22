#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** ------------ Exercise 6 - Find max value in an array with pointers --------------
 * Write a C program that:
 * - Read an array and find the max value with a pointer with a function;
 * - Use a function to fill the array.
 */

int fillArray(int *vector, int vectorSize);
int printArray(int *vector, int vectorSize);
int findMax(int *vector, int vectorSize);

int main() {

    int vectorLength = 0;

    do {
        printf("Insert the vector length: ");
        scanf("%d", &vectorLength);

        if (vectorLength <= 0) {
            printf("Invalid array length!\n");
        }
    } while (vectorLength <= 0);

    int numbersArray[vectorLength];
    int maxFounded = 0;

    fillArray(numbersArray, vectorLength);
    printArray(numbersArray, vectorLength);
    maxFounded = findMax(numbersArray, vectorLength);

    printf("The max value of the array is: %d\n", maxFounded);
    return 0;
}

int fillArray(int *vector, int vectorSize) {
    srand(time(NULL));

    for (int i = 0; i < vectorSize; i++) {
        *(vector + i) = rand() % 100;
    }

    return 0;
}

int printArray(int *vector, int vectorSize) {
    printf("Array printed by pointer arithmetic: [");
    for (int i = 0; i < vectorSize; i++) {
        printf("%d", *(vector + i));

        if (i < vectorSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}

int findMax(int *vector, int vectorSize) {
    int max = *vector;

    for (int i = 1; i < vectorSize; i++) {
        if (*(vector + i) > max) {
            max = *(vector + i);
        }
    }

    return max;
}

