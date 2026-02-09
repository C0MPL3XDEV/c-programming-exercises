#include <stdio.h>

// ----- Exercise 5 ------
// Write a program to make a division of two integer numbers
// and return the integer division and explict cast division

int main() {
    int a, b, result;
    printf("Enter two numbers for the division: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("ERROR: Impossible to divide per 0\n");
        return 0;
    }

    result = a / b;

    printf("Result of integer divsion: %d\n", result);
    printf("Result casted of division: %.2f", (float)result);

    return 0;
}