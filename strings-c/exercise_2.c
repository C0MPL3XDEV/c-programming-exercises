#include <stdio.h>
#include <ctype.h>   // Provides character classification and conversion functions
#include <string.h>  // Provides string handling functions such as strlen()

/** ------------------ Exercise 2 - Strings --------------------
 * Objective:
 *  Read a word from standard input and count how many vowels
 *  and consonants it contains.
 *
 * Rules applied:
 *  - The comparison must be case-insensitive
 *    (e.g. 'A' and 'a' are considered the same)
 *  - Non-alphabetical characters (digits, spaces, symbols, \n)
 *    must be ignored
 *  - Functions from <ctype.h> are used to simplify character checks
 *
 * Key idea:
 *  Each character of the string is analyzed individually.
 *  Only valid alphabetic characters are classified as
 *  vowels or consonants.
 */

int main() {
    // Character array used to store the input word
    char word[100];

    printf("------------------- VOWELS and CONSONANTS COUNTER ----------------\n");
    printf("Insert a word: ");

    // Reads the input string from standard input
    // fgets may also store the newline character '\n'
    fgets(word, 100, stdin);

    // Counters used to store the number of vowels and consonants
    int vowels_counter = 0;
    int consonants_counter = 0;

    // Length of the string (includes '\n' if present)
    int word_length = strlen(word);

    // Scan the string character by character until the string terminator '\0'
    for (int i = 0; word[i] != '\0'; i++) {

        // Store the current character for readability
        char current_char = word[i];

        // First check: consider only alphabetic characters
        // This automatically ignores digits, symbols, spaces and '\n'
        if (isalpha(current_char)) {

            // Convert the character to lowercase to ensure
            // a case-insensitive comparison
            char lower_case_char = tolower(current_char);

            // Second check: determine whether the character is a vowel
            // Vowels are defined explicitly: a, e, i, o, u
            if (lower_case_char == 'a' ||
                lower_case_char == 'e' ||
                lower_case_char == 'i' ||
                lower_case_char == 'o' ||
                lower_case_char == 'u') {

                // If the character is a vowel, increment vowel counter
                vowels_counter++;
            } else {
                // Otherwise, the character is an alphabetic
                // non-vowel, therefore a consonant
                consonants_counter++;
            }
        }
        // Non-alphabetical characters are ignored automatically
    }

    printf("----------------------- RESULTS --------------------\n");
    printf("Vowels Counter: %d\n", vowels_counter);
    printf("Consonants Counter: %d\n", consonants_counter);
    printf("Word Length: %d\n", word_length);

    return 0;
}