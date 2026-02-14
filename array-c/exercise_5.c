#include <stdio.h>

/** -------------- Exercise 5 - Remove an element from array -------------
 * Write a C program that:
 * 1. Reads and array of integers and its size `n`
 * 2. Reads an index `k`
 * 3. Removes the element at position `k` by shifting the remaining elements to the left
 * 4. Prints the resulting array
 */

int main() {
    int array_dimension = 0;
    int index_to_remove = 0;

    do {
        printf("Insert array dimension: ");
        scanf("%d", &array_dimension);
        if (array_dimension <= 0) {
            printf("Invalid array dimension\n");
        }
    } while (array_dimension <= 0);

    int numbers_array[array_dimension];

    printf("--------------------- FILL ARRAY -----------------\n");

    for (int i = 0; i < array_dimension; i++) {
        printf("Insert %d element in the array: ", i);
        scanf("%d", &numbers_array[i]);
    }

    printf("-------------------- ARRAY ----------------------\n");
    printf("[");
    for (int i = 0; i < array_dimension; i++) {
        printf("%d", numbers_array[i]);
        if (i < array_dimension - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("--------------------- REMOVE ELEMENT -----------------\n");

    /** DELETE ELEMENT EXPLAINED:
     *
     * I C, arrays have a fixed size in memory, so we cannot physically "delete" an element.
     * Removing an element means:
     *  1. Overwrite the element at the chosen index by shifting all the following elements
     *     one position to the LEFT
     *  2. Reduce the logical size of array by 1 (the last element becomes unused)
     *
     * Example:
     *  numbers_array = [3 ,7, 5, 2, 8], array_dimension = 5, index_to_remove = 2
     *  So we want to remove the value '5' at index 2
     *
     *  Shift process:
     *    We start from the index to delete so:
     *    i = 2 -> numbers_array[2] = numbers_array[3] => [3, 7, 2, 2, 8]
     *    i = 3 -> numbers_array[3] = numbers_array[4] => [3, 7, 2, 8, 8]
     *    ...
     *
     *  Now the array is considered valid only up to array_dimension - 1 elements:
     *  Final logical array = [3 ,7, 2, 8]
     *
     * General Rule:
     *  To Remove the elemen at position 'k' from an array of size 'n':
     *   for(i = k; i < n - 1; i++) {
     *     v[i] = v[i + 1];
     *   }
     *
     *  After the shift, the new logical size is n - 1.
     *
     * Important:
     *   k must be valid: 0 <= k < n
     */

    do {
        printf("Insert the index to remove (from 0 to %d): ", array_dimension - 1);
        scanf("%d", &index_to_remove);
        if (index_to_remove < 0 || index_to_remove >= array_dimension) {
            printf("Invalid index to remove!\n");
        }
    } while (index_to_remove < 0 || index_to_remove >= array_dimension);

    for (int i = index_to_remove; i < array_dimension - 1; i++) {
        numbers_array[i] = numbers_array[i + 1];
    }

    printf("--------------------- FINAL ARRAY -----------------\n");
    printf("[");
    for (int i = 0; i < array_dimension - 1; i++) {
        printf("%d", numbers_array[i]);
        if (i < array_dimension - 2) {
            printf(", ");
        }
    }

    printf("]\n");

    return 0;
}