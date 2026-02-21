#include <stdio.h>

/** ------------ Exercise 3 - Linear Search --------------
 * Write a C program that:
 * - Read an array of integers
 * - Read a target value to search
 * - Search the target with linear search algorithm
 * - Print the index of the first occurrence or a "Not found" message
 *
 * Linear Search: is a simple search technique that scans the array
 * sequentially from the first element to the last until the target value
 * is founded or the end of the array is reached.
 */

#define true 1
#define false 0

int main() {

    int array_length = 0;

    // Read array length == how many numbers to insert
    do {
        printf("Enter how many numbers do you want insert: ");
        scanf("%d", &array_length);
        if (array_length <= 0) {
            printf("Array length must be greater than 0.");
        }
    } while (array_length <= 0);

    // Initialize the array
    int numbers[array_length];

    // Fill the array by the user

    for (int i = 0; i < array_length; i++) {
        printf("Insert number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int target_to_search = 0;
    printf("Insert target number to search: ");
    scanf("%d", &target_to_search);

    // Linear search implementation:

    int index_of_target = -1;
    int found = false;

    // Linear Search implementation:
    //
    // The array is scanned sequentially from index 0 to index array_length - 1.
    // At each step, the current element is compared with the target value.
    // If a match is found:
    //   - the index is stored
    //   - a flag is set to indicate success
    //   - the loop is terminated using 'break'
    //
    // If the loop ends without finding the target, the element is not present.

    for (int i = 0; i < array_length; i++) {
        if (numbers[i] == target_to_search) {
            found = true;
            index_of_target = i;
            break;
        }
    }

    if (found) {
        printf("Target %d founded at index %d", target_to_search, index_of_target);
    } else {
        printf("Element %d not found in the array! 404", target_to_search);
    }

    return 0;
}