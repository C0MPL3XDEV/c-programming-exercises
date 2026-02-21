#include <stdio.h>

/** ------- Exercise 4 - Binary Search --------
 *  Write a C program that:
 *  - Use a sorted array of integers
 *  - Search for a target value using binary search
 *  - Prints the index if founded
 *
 *  Requirements:
 *  - Use start, end and middle indices
 *  - Stop when start > end
 */

#define true 1
#define false 0

int main() {

    // Array definition, usually we use algorithm to sort the
    // array, but for now we use a generated prefilled sorted array

    int array_length = 0;

    do {
        printf("Insert array length: ");
        scanf("%d", &array_length);
        if (array_length <= 0) {
            printf("Invalid array length!\n");
        }
    } while (array_length <= 0);

    int numbers_array[array_length];

    for (int i = 0; i < array_length; i++) {
        numbers_array[i] = i;
    }

    printf("Sorted array: ");

    printf("[");
    for (int i = 0; i < array_length; i++) {
        printf("%d", numbers_array[i]);
        if (i < array_length - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    // Binary Search implementation

    int targetToSearch = 0;
    printf("Insert target number to search: ");
    scanf("%d", &targetToSearch);

    int found = false;
    int startIndex = 0;
    int endIndex = array_length - 1;
    int foundedIndex = -1;

    while (!found && startIndex <= endIndex) {
        int middleIndex = (startIndex + endIndex) / 2;

        if (numbers_array[middleIndex] == targetToSearch) {
            found = true;
            foundedIndex = middleIndex;
        } else if (numbers_array[middleIndex] < targetToSearch) {
            startIndex = middleIndex + 1;
        } else {
            endIndex = middleIndex - 1;
        }
    }

    if (found) {
        printf("The target %d founded at index %d", targetToSearch, foundedIndex);
    } else {
        printf("Element %d not found in the array! 404", targetToSearch);
    }

    return 0;
}

