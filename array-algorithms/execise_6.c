#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** -------------------- Exercise 6 - Sorting algorithms -------------------------
 *  Write a C program that sorts an array using Bubble sort with early termination
 *
 *  Requirements:
 *   - Use boolean value to detect a swap
 *   - Stop if the array is already sorted
 */

#define true 1
#define false 0;

int main() {
    int array_length = 0;

    do {
        printf("Insert the array length: ");
        scanf("%d", &array_length);
        if (array_length <= 0) {
            printf("Invalid array length!\n");
        }
    } while (array_length <= 0);


    int numbers_array[array_length];

    srand(time(NULL));

    for (int i = 0; i < array_length; i++) {
        numbers_array[i] = rand() % 100;
    }

    printf("Unsorted array: [");
    for (int i = 0; i < array_length; i++) {
        printf("%d", numbers_array[i]);
        if (i < array_length - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    // Bubble Sort implementation

    int swapped = true;

    for (int i = 0; i < array_length - 1 && swapped; i++) {
        swapped = false;
        for (int j = 0; j < array_length - i - 1; j++) {
            if (numbers_array[j] > numbers_array[j + 1]) {
                int aux = numbers_array[j];
                numbers_array[j] = numbers_array[j + 1];
                numbers_array[j + 1] = aux;
            }
        }
    }

    printf("Sorted array: [");
    for (int i = 0; i < array_length; i++) {
        printf("%d", numbers_array[i]);
        if (i < array_length - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}