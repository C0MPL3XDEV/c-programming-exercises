#include <stdio.h>

// ------------ Exercise 4 --------------
// Perfect Structure: Write a C file with this structure:
//  - Stdio Lib
//  - Function Prototype --> sum()
//  - Main function
//  - Define function sum()

int sum(int a, int b); // Prototype of function

int main() {
    // Var declaration - Integer Type
    int x, y;
    int result = 0;

    // In printf() format specifiers are also used to control the OUTPUT format:
    // %.2f   -> print a float/double with 2 decimal digits (rounding the value)
    // %.3f   -> print with 3 decimal digits
    // %6.2f  -> print a float in a field of width 6 with 2 decimals
    // %03d   -> print an integer with at least 3 digits, padding with zeros

    printf("Insert two numbers to sum: "); // Print function

    // In scanf() we use '&' because the function need the address of the variable to write the value
    // In scanf() we need to specify the type of data so we use the format specifiers:
    //      - %d --> digit (int)
    //      - %f --> float
    //      - %lf --> large float (double)
    //      - %c --> char
    //      - %s --> string (char array)

    scanf("%d %d", &x, &y);
    result = sum(x, y); // Call function to get the result and assign the value to the result variable.
    printf("The sum of %d and %d is: %d", x, y, result);
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

