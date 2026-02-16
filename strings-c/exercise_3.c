#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

/** -------------------------- EXERCISE 4 - Strings -------------------
 *  Write a C program that:
 *  1. Reads 2 strings.
 *  2. Compares them lexicographically using `strcmp`.
 *  3. Prints:
 *      - Whether the strings are equal
 *      - Or which one comes first in alphabetical order.
 */


/**
 * This program compares two strings lexicographically.
 *
 * The process is divided into two main phases:
 * 1) Check whether the two strings are exactly equal.
 * 2) If they are different, determine which string comes first
 *    in alphabetical (lexicographical) order.
 *
 * The comparison is performed character by character, following
 * the ASCII ordering rules used by the C language.
 */

int main () {
    char string1[100];
    char string2[100];
    int isEqual = false;

    printf("--------------- STRINGS LEXICOGRAPHICALLY CHECKER ----------------\n");

    // READ THE 2 STRINGS INPUTS

    printf("Insert the first string: ");
    fgets(string1, 100, stdin);

    printf("Insert the second string: ");
    fgets(string2, 100, stdin);

    // First comparison: check if the two strings are exactly identical.
    // strcmp returns:
    //   0  -> if both strings are equal
    //   <0 -> if string1 comes before string2
    //   >0 -> if string1 comes after string2
    //
    // Here we only check the equality case (return value == 0).

    if (strcmp(string1, string2) == 0) {
        isEqual = true;
        printf("The two strings are the same!\n");
    } else {
        printf("The two strings are different!\n");
    }

    // CHECK WHICH ONE COMES FIRST IF ARE DIFFERENT

    // The isEqual flag is used to avoid unnecessary comparisons.
    // If the strings are equal, there is no need to determine
    // alphabetical order.



    if (!isEqual) {
        int len1 = strlen(string1);
        int len2 = strlen(string2);

        // If the strings are different, we proceed with a manual
        // lexicographical comparison.
        //
        // We compute the length of both strings and determine the
        // minimum length to avoid accessing characters outside bounds.

        int minLength = len1 > len2 ? len2 : len1;

        printf("Min length: %d\n", minLength);

        // The strings are compared character by character.
        // The first position where the characters differ determines
        // the alphabetical order.
        //
        // If characters are equal, the loop continues.
        // If a difference is found, the ASCII values are compared:
        //   - the smaller character comes first alphabetically.


        for (int i = 0; i < minLength; i++) {
            if (string1[i] == string2[i]) {
                continue;
            }

            // Once the first differing character is found, the alphabetical
            // order is printed and the loop is terminated using break,
            // because further comparisons are unnecessary.

            if (string1[i] > string2[i]) {
                printf("Alphabetical order of strings are:\n");
                printf("\t1. %s", string2);
                printf("\t2. %s", string1);
                break;
            }

            if (string2[i] > string1[i]) {
                printf("Alphabetical order of strings are:\n");
                printf("\t1. %s", string1);
                printf("\t2. %s", string2);
                break;
            }
        }
    }

    // Note:
    // If no difference is found within the first minLength characters,
    // the strings share a common prefix.
    // In lexicographical order, the shorter string comes first.

    return 0;
}