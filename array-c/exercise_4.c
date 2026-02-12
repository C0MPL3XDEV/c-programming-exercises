#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ---------------------- Exercise 4 - Circular Right Shift ------------------------ //
// - Write a C program that performs a circular right shift by one position on an array
// - Example:
// - Input Array = [1, 2, 3, 4, 5] --> Output Array = [5, 1, 2, 3, 4]

int main() {
    int array_dimension = 0;

    // Read array dimension by user Input
    do {
        printf("Insert array dimension: ");
        scanf("%d", &array_dimension);
        if (array_dimension <= 0) {
            printf("Invalid dimension!\n");
        }
    } while (array_dimension <= 0);

    // Array initialization
    int numbers_array[array_dimension];

    // Random fill array
    srand(time(NULL));

    for (int i = 0; i < array_dimension; i++) {
        numbers_array[i] = (rand() % 10) + 1;
    }

    // Print generated array
    printf("\n---------------- GENERATED ARRAY -----------------\n");
    printf("[");
    for (int i = 0; i < array_dimension; i++) {
        printf("%d", numbers_array[i]);
        if (i < array_dimension - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    /** CIRCULAR SHIFT DEFINITION:
     *
     * 1. Circular Right Shift (Rotation):
     * Each element moves one position to the right (index i -> i + 1).
     * The last element "wraps around" to become the first element.
     *
     * 2. Circular Left Shift (Rotation):
     * Each Element move one position to the left (index i -> i - 1).
     * The first element "wraps around" to become the last element.
     *
     * GENERAL RULE FOR N POSITIONS:
     * To shift an array of size L by n positions:
     * - New Index = (Current index + n) % L  (For right shift)
     * - New Index = (Current index - n + L) % L (For left shift)
     */

    // Right Shift Implementation

    // This represents the last element of the array, we need to put after the cycle in the first element of the array
    int aux_var = numbers_array[array_dimension - 1];

    for (int i = array_dimension - 1; i > 0; i--) { // We scan all elements of the array from right to left
        numbers_array[i] = numbers_array[i - 1]; // Assign the value in the position i - 1 in the current position
    }
    numbers_array[0] = aux_var; // Put the last value of the original array in the first position


    // Print Result
    printf("---------------- RESULT -----------------\n");
    printf("Right Shifted array: [");
    for (int i = 0; i < array_dimension; i++) {
        printf("%d", numbers_array[i]);
        if (i < array_dimension - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}