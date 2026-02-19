#include <stdio.h>
#include <string.h>

/** --------------- EXERCISE 5 - Strings ----------------
 * Write a C program that:
 * 1. Reads string
 * 2. Reverses it in place, without using lib functions for reversing
 * 3. Prints the reversed string
 *
 * Requirements:
 *  - Use a temporary variable to swap characters
 *  - Do not allocate a second string
 */

/**
 * This program reverses a string in place.
 *
 * The inversion is performed by swapping characters symmetrically:
 * - the first character is swapped with the last,
 * - the second character with the second-to-last,
 * and so on.
 *
 * The algorithm works directly on the original string, without
 * allocating a second array, using a temporary variable to swap
 * characters safely.
 */

int main() {
    char string[100];

    printf("Insert a string: ");
    fgets(string, 100, stdin);

    int string_length = strlen(string);

    // Reverse the string by swapping characters symmetrically.
    //
    // For each index i:
    //   - string[i] is swapped with string[string_length - 1 - i]
    //
    // The loop iterates from the beginning of the string up to the end,
    // performing in-place swaps using a temporary variable.

    for (int i = 0; i < string_length - 1; i++) {
        char temp = string[i]; // Swap characters
        string[i] = string[string_length - i - 1]; // Swap characters
        string[string_length - i - 1] = temp; 
    }

    printf("Reversed string: %s", string);

    return 0;
}