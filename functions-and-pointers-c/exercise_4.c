#include <stdio.h>

/** ----------------- Exercise 4 - Increment with pointers ---------------
 * Write a C program that:
 * - Read an integer
 * - A function read an integer pointer and increment of 1 the value
 */


/**
 * --------------------- POINTERS QUICK GUIDE ---------------------
 *
 * WHAT IS A POINTER?
 * A pointer is a variable that stores the MEMORY ADDRESS of another variable.
 * Instead of holding a value, it "points" to where the value is stored.
 *
 * ---------------------------------------------------------------
 * SYMBOLS USED WITH POINTERS
 *
 * 1) &  (address-of operator)
 *    - Used to obtain the memory address of a variable.
 *    - Example:
 *        int x = 10;
 *        int *p = &x;   // p stores the address of x
 *
 * 2) *  (dereference operator)
 *    - Used to access or modify the value stored at a memory address.
 *    - Example:
 *        *p = 20;   // modifies the value of x through the pointer
 *
 * ---------------------------------------------------------------
 * WHY POINTERS ARE USED
 *
 * - To modify variables inside functions
 * - To pass arrays to functions
 * - To avoid unnecessary copies of data
 * - To work directly with memory
 *
 * ---------------------------------------------------------------
 * WHY & IS USED IN main()
 *
 * In main(), we call:
 *     incrementInteger(&number);
 *
 * We pass the ADDRESS of 'number', not its value.
 * This allows the function to modify the original variable.
 *
 * ---------------------------------------------------------------
 * WHY * IS USED IN THE FUNCTION
 *
 * The function receives a pointer:
 *     int incrementInteger(int *number)
 *
 * 'number' is NOT the value, but the address of the variable.
 *
 * Using:
 *     *number += 1;
 *
 * we DEREFERENCE the pointer and modify the value stored
 * at that address.
 *
 * ---------------------------------------------------------------
 * SUMMARY (MENTAL TRANSLATION)
 *
 * &x   → "where is x stored in memory?"
 * *p   → "give me the value stored at this address"
 *
 * ---------------------------------------------------------------
 * KEY RULE TO REMEMBER FOR THE EXAM
 *
 * If a function must modify a variable, you MUST pass its address
 * and use a pointer.
 *
 * ---------------------------------------------------------------
 */

int incrementInteger(int *);

int main() {

    int number = 1;
    printf("Number before increment with pointer: %d\n", number);
    incrementInteger(&number);
    printf("Number after increment with pointer: %d\n", number);
    return 0;
}

int incrementInteger(int *number) {
    *number += 1;
    return 0;
}