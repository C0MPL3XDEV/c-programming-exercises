#include <stdio.h>

/** ------------- Exercise 1 - Functions -----------------
 * Write a C program that:
 *  - Execute the sum operation with function
 */

int sum(int, int);

int main() {
    int a, b, result;

    do {
        printf("Insert two numbers to sum: ");
        scanf("%d %d", &a, &b);
        if (a <= 0 || b <= 0) {
            printf("Invalid number inserted!\n");
        }
    } while (a <= 0 || b <= 0);

    result = sum(a, b);

    printf("The sum of %d and %d is: %d\n", a, b, result);

    return 0;
}

int sum(int a, int b) {
    return a + b;
}