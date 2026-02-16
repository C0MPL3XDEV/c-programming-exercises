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


int main() {
    char word[100];
    int isPalindrome = false;

    printf("---------------- PALINDROME WORD CHECKER ----------------\n");

    printf("Insert a word: ");
    fgets(word, 100, stdin);

    int word_length = strlen(word);

    for (int i = 0; i < word_length - 1 / 2; i++) {
        if (word[i] == word[word_length - 1 - i]) {
            isPalindrome = true;
        }
    }

    if (isPalindrome) {
        printf("The word is palindrome! %s", word);
    }

    return 0;
}