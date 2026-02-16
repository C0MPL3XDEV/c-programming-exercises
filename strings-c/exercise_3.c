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

    // CHECK IF THE TWO STRINGS ARE IDENTICALLY

    if (strcmp(string1, string2) == 0) {
        isEqual = true;
        printf("The two strings are the same!\n");
    } else {
        printf("The two strings are different!\n");
    }

    // CHECK WHICH ONE COMES FIRST IF ARE DIFFERENT

    if (!isEqual) {
        int len1 = strlen(string1);
        int len2 = strlen(string2);

        int minLength = len1 > len2 ? len2 : len1;

        printf("Min length: %d\n", minLength);

        for (int i = 0; i < minLength; i++) {
            if (string1[i] == string2[i]) {
                continue;
            }

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

    return 0;
}