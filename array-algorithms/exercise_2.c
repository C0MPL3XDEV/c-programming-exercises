#include <stdio.h>

/** ------------ Exercise 2 - Array Algorithms -------------
 * Write a C program that:
 * 1. Reads an integer `n`
 * 2. Stores the first `n` Fibonacci numbers in an array
 * 3. Prints the sequence
 *
 * Requirements:
 *  - Initialize the first two elements explicitly
 *  - Compute each new element using the two previous ones
 */

int main() {

    int number_of_fibonacci_numbers = 0;
    printf("Insert the number of fibonacci numbers to print: ");
    scanf("%d", &number_of_fibonacci_numbers);

    int fibonacci_sequence[number_of_fibonacci_numbers];

    // Initial values
    fibonacci_sequence[0] = 1;
    fibonacci_sequence[1] = 1;

    for (int i = 2; i < number_of_fibonacci_numbers; i++) {
        fibonacci_sequence[i] = fibonacci_sequence[i - 1] + fibonacci_sequence[i - 2];
    }

    for (int i = 0; i < number_of_fibonacci_numbers; i++) {
        printf("%d, ", fibonacci_sequence[i]);
    }

    return 0;
}