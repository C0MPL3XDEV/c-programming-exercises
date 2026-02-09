#include <stdio.h>

// ------------- Exercise 2 ----------------
// Calculate max of two number given in input

int main () {
    int a, b = 0;

    printf("Insert the first number:");
    scanf("%d", &a);
    printf("Insert the second number:");
    scanf("%d", &b);

    if (a > b) {
        printf("%d is greater than %d", a, b);
    }

    if (a < b) {
        printf("%d is less than %d", a, b);
    }

    if (a == b) {
        printf("%d is equal to %d", a, b);
    }
}