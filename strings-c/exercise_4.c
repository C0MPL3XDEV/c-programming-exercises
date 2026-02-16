#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

/** ----------------- EXERCISE 4 - Strings ---------------------
 * Write a C program that checks whether a given word is palindrome:
 * Requirements:
 *   - Compare chars symmetrically from the beginning to the end
 *   - Stop comparison at half of the string
 *   - Print an appropriate message
 */

/**
 * This program checks whether a given word is a palindrome.
 *
 * A palindrome is a word that reads the same forwards and backwards.
 * The check is performed by comparing characters symmetrically:
 * - the first character with the last,
 * - the second character with the second-to-last,
 * and so on.
 *
 * The comparison stops at half of the string, because beyond that
 * the characters would be checked again in reverse order.
 */


int main() {
    char word[100];

    // The isPalindrome flag is used to keep track of the result.
    // It is set to true when the symmetric characters match.

    int isPalindrome = false;

    printf("---------------- PALINDROME WORD CHECKER ----------------\n");

    printf("Insert a word: ");
    fgets(word, 100, stdin);

    int word_length = strlen(word);

    // Compare characters symmetrically from the beginning and the end.
    //
    // The loop iterates only up to half of the word length:
    // - word[i] is compared with word[word_length - 1 - i]
    // - Example:
    //   len = 4, i = 1 == word[0] == word[4 - 1 - 0] --> word[3] (the last)
    // - if all symmetric character pairs are equal, the word is a palindrome
    //
    // Checking only half of the string is enough, because the remaining
    // characters would mirror the ones already compared.


    for (int i = 0; i < word_length - 1 / 2; i++) {
        if (word[i] == word[word_length - 1 - i]) {
            isPalindrome = true;
        }
    }

    if (isPalindrome) {
        printf("The word is palindrome! %s", word);

    } else {
        printf("The word is not palindrome! %s", word);
    }

    return 0;
}