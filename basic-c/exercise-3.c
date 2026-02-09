#include <stdio.h>

// ---------------- Exercise 3 --------------
// Create a program to print N numbers.
// User insert the range to N to print.

int main() {
    int nNumbersToPrint = 0;

    printf("Insert quantity of numbers to print: ");
    scanf("%d", &nNumbersToPrint);

    for (int i = 1; i <= nNumbersToPrint; i++) {
        int num = i;
        printf("%d\n", num);
    }
}