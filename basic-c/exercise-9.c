#include <stdio.h>

// --------- Exercise 9 ----------
// Create a program with do...while cycle to force the user to insert a number from 1 to 10

// ----------- DO WHILE CYCLE ---------------
// do-while cycle it's a Post-conditional cycle the body of the cycle
// it's executed at least once and after the verification of condition

int main() {
    int choice;

    do {
        printf("Insert your choice (from 1 to 10): ");
        scanf("%d", &choice);
        printf("Invalid number!\n");
    } while (choice < 1 || choice > 10);

    printf("OK: %d\n", choice);

    return 0;
}