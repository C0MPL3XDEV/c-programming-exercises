#include <stdio.h>

/** ------------ Exercise 2 - Array Algorithms -------------
 * Write a C program that:
 * 1. Reads an integer `n`
 * 2. Stores the first `n` Fibonacci numbers in an array
 * 3. Prints the sequence
 *
 * The Fibonacci Sequence is defined:
 *   - F(0) = 1
 *   - F(1) = 1
 *   - F(n) = F(n - 1) + F(n - 2)
 *
 * Each amount of the sequence is obtained by summing the two previous one
 *
 * Requirements:
 *  - Initialize the first two elements explicitly
 *  - Compute each new element using the two previous ones
 */

int main() {

    // Number of elements of the sequence to generate
    int number_of_fibonacci_numbers = 0;

    // Read Input
    printf("Insert the number of fibonacci numbers to print: ");
    scanf("%d", &number_of_fibonacci_numbers);

    // Array to store the sequence
    // The array size is equal to the number of elements requested
    int fibonacci_sequence[number_of_fibonacci_numbers];

    // Initial explicit two values
    fibonacci_sequence[0] = 1;
    fibonacci_sequence[1] = 1;

    // Compute the remaining numbers of the sequence
    // Starting from index 2, each element is calculated
    // as the sum of the two previous 
    //
    //     fibonacci_sequence[i] = fibonacci_sequence[i - 1]
    //                          + fibonacci_sequence[i - 2]
    // The loop fills the array sequentially
    for (int i = 2; i < number_of_fibonacci_numbers; i++) {
        fibonacci_sequence[i] = fibonacci_sequence[i - 1] + fibonacci_sequence[i - 2];
    }

    printf("[");
    for (int i = 0; i < number_of_fibonacci_numbers; i++) {
        printf("%d", fibonacci_sequence[i]);
        if (i < number_of_fibonacci_numbers - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}