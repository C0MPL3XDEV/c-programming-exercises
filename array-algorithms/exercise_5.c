#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** --------------------------- Exercise 5 - Sorting Algorithms ---------------------------
 *  Write a C program that sort an array of integers in ascending order using Selection Sort
 *  Requirements:
 *   - Find the minimum value in the unsorted position
 *   - Swap it in the current position
 *   - Print the array before and after sorting
 *
 *   Selection Sort works by repeatedly selecting the smallest element
 *   from the unsorted part of the array and moving it to its correct
 *   position in the sorted part
 *
 *   The array is conceptually divided in two parts:
 *    - A sorted part (on the left)
 *    - an unsorted part (on the right)
 *
 *   At each iteration, the sorted part grows by one element.
 */

int main() {

    int array_length = 0;

    // Read array length with validation
    do {
        printf("Insert the array length: ");
        scanf("%d", &array_length);
        if (array_length <= 0) {
            printf("Invalid array length!\n");
        }
    } while (array_length <= 0);

    // Declare the array
    int numbers_array[array_length];

    // Init random number generator
    srand(time(NULL));

    // Fill the array with random value (0-99)
    for (int i = 0; i < array_length; i++) {
        numbers_array[i] = rand() % 100;
    }

    // Print the array before sorting
    printf("Unsorted array: ");
    printf("[");
    for (int i = 0; i < array_length; i++) {
        printf("%d", numbers_array[i]);
        if (i < array_length - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    // --------------- SELECTION SORT ---------------
    //
    // Outer Loop:
    //  - i represents the boundary between the sorted and unsorted parts
    //  - at iteration i, elements from index 0 to i - 1 are already sorted
    //  - we want to place the correct smallest element at position i
    //
    for (int i = 0; i < array_length - 1; i++) {

        // Assume the min element of unsorted part is at position i
        int min_index = i;

        // Inner loop:
        //  - Scans the unsorted part of the array
        //  - searches for the smallest element
        for (int j = i + 1; j < array_length; j++) {

            // If a smaller element is found
            // Update the index of the minimum
            if (numbers_array[j] < numbers_array[min_index]) {
                min_index = j;
            }
        }

        // Swap step:
        //  - Place the smallest element found at position i
        //  - This extend the sorted part by one element
        int aux = numbers_array[i];
        numbers_array[i] = numbers_array[min_index];
        numbers_array[min_index] = aux;
    }

    // Print the sorted array
    printf("Sorted array: ");
    printf("[");
    for (int i = 0; i < array_length; i++) {
        printf("%d", numbers_array[i]);
        if (i < array_length - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}