#include <stdio.h>

/** ---------------- Exercise - Recursion (Fibonacci) ---------------------
 *
 * This program computes the n-th Fibonacci number using recursion.
 *
 * The Fibonacci sequence is defined as:
 *   F(0) = 0
 *   F(1) = 1
 *   F(n) = F(n-1) + F(n-2)   for n >= 2
 *
 * The recursive implementation follows directly this definition.
 */

// Function prototype for the recursive Fibonacci function
int fibonacci(int);

int main() {

    int fibonacciNumber = 0;

    // Read a non-negative integer from the user.
    // Fibonacci is not defined for negative numbers.
    do {
        printf("Insert a number to calculate the Fibonacci sequence: ");
        scanf("%d", &fibonacciNumber);

        if (fibonacciNumber < 0) {
            printf("The Fibonacci sequence is not defined for negative numbers!\n");
        }
    } while (fibonacciNumber < 0);

    // Call the recursive Fibonacci function
    int result = fibonacci(fibonacciNumber);

    // Print the result
    printf("The %d-th number of the Fibonacci sequence is %d\n",
           fibonacciNumber, result);

    return 0;
}

/**
 * Recursive Fibonacci function.
 *
 * This function computes the Fibonacci number of 'number' by:
 *  - stopping at the base cases
 *  - recursively calling itself for smaller values
 *
 * Recursion structure:
 *  - Base cases:
 *      - fibonacci(0) returns 0
 *      - fibonacci(1) returns 1
 *  - Recursive case:
 *      - fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
 */
int fibonacci(int number) {

    // -------- BASE CASE 1 --------
    // If number is 1, return 1.
    // This stops the recursion.
    if (number == 1) {
        return 1;
    }

    // -------- BASE CASE 2 --------
    // If number is 0, return 0.
    // This also stops the recursion.
    if (number == 0) {
        return 0;
    }

    // -------- RECURSIVE CASE --------
    // The function calls itself with smaller values of 'number'.
    // Each recursive call moves closer to the base cases.
    return fibonacci(number - 1) + fibonacci(number - 2);
}