#include <stdio.h>

/** -------------------- Exercises 1 - Array algorithms ----------------
 * Write a C program that:
 * 1. Reads a positive integer
 * 2. Converts into a binary representation using an array
 * 3. Prints the binary number in the correct order
 *
 * Requirements:
 *  - Use repeated division 2
 *  - Store remainders in an array
 *  - Print in reverse order
 */

int main() {
    int decimal_number = 0;

    // Input validation:
    // We want a non-negative integer (>= 0)
    // If the user enters a negative number ask again

    printf("---------------- DECIMAL TO BINARY CONVERTER --------------------\n");

    do {
        printf("Insert a decimal number to convert: ");
        scanf("%d", &decimal_number);
    } while (decimal_number < 0);

    // Work Variables:

    // We store binary digits (remainders) here -- 32 bits its enough to represent a standard int in binary
    int remainders[32];

    // 'counter' represents how many bits we have stored
    // it also represents the next free position in the 'remainders' array.
    int counter = 0;

    // 'current_remainder' will hold the result of (n % 2), i.e., the next bit (0 or 1(
    int current_remainder = 0;

    // We keep the original number untouched for final printing so we use a copy
    int decimal_number_copy = decimal_number;

    // Conversion loop (repeated division by 2)
    //
    // Each iteration:
    //  1. remainder = n % 2 -> Extracts the next binary digit
    //  2. store remainder in array at position 'counter'
    //  3. n = n / 2 -> moves to the next digit (shift right in base 2)
    //  4. counter++ -> on more bit saved
    //
    // We use a do...while cycle because:
    // - It guarantees at least one iteration, which correctly handles decimal_number = 0

    do {
        current_remainder = decimal_number_copy % 2;   // Step 1: Computer the remainder
        remainders[counter] = current_remainder;       // Step 2: store it
        decimal_number_copy = decimal_number_copy / 2; // Step 3: update number (integer divsiion)
        counter++;                                     // Step 4: increase stored-bits counter
    } while (decimal_number_copy > 0);

    // At this point the remainders are stored in reverse order
    // remainders[0] = is the least significant bit (LSB)
    // remainders[counter - 1] it the most significant bit (MSB)
    // To print correct we need to print the array in reverse order MSB -> LSB

    printf("Binary representation of %d: ", decimal_number);

    for (int i = counter - 1; i >= 0; i--) {
        printf("%d", remainders[i]);
    }

    return 0;
}

