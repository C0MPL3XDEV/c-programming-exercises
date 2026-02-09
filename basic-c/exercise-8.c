#include <stdio.h>

// --------------- Exercise 8 --------------
// Create a program with while cycle to count the number
// of digits contained in a number.

// ------------- WHILE CYCLE ------------
// Pre-Conditional Cycle it's a cycle where the condition is verified before the execution of the cycle


int main() {

    // To count the number of digits of a number we use the division operation div 10
    // While the number arrive to zero after we get the number of digits

    int n, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input");
        return 0;
    }

    while (n!=0) {
        n = n / 10;
        count++;
    }

    printf("The digits of numbers is: %d", count);

    return 0;
}

