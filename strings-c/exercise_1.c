#include <stdio.h>

/** ---------------------- Exercise 1 - Strings -----------------------
 * Compute string length without using `strlen`
 *
 * Objective:
 *  - Read a word from standard input
 *  - Manually compute its length by scanning the character array
 *  - Stop the scan when the string terminator '\0' is reached
 *  - Print the computed length
 *
 * Notes:
 *  - The input is assumed to be a single word (no spaces)
 *  - `fgets` stores the newline character '\n' before '\0'
 */

int main() {
    // Character array to store the input word (max 99 characters + '\0')
    char input_word[100];

    printf("-------------- INSERT WORD --------------\n");
    printf("Insert a word: ");

    // Read input from standard input
    // fgets reads until newline or size-1 characters and appends '\0'
    fgets(input_word, 100, stdin); // Alternative: scanf("%s", input_word)

    // Variable used to count the number of characters in the string
    int word_length = 0;

    // Scan the character array one element at a time
    // The loop stops when the string terminator '\0' is found
    for (int i = 0; input_word[i] != '\0'; i++) {
        word_length++; // Increment counter for each valid character
    }

    printf("---------------- RESULT -----------------\n");

    // Subtract 1 to exclude the newline character '\n' added by fgets
    printf("The length of the word inserted is: %d", word_length - 1);

    return 0;
}