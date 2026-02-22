#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** -------------- Exercise - Print an Array with Pointers -----------------
 *
 * Goal:
 * - Create an array of integers
 * - Print its elements using a function and pointer arithmetic
 * - Do NOT use the array indexing syntax v[i] inside the printing function
 *
 * Key concept:
 * In C, when an array is passed to a function, it "decays" into a pointer
 * to its first element. That means:
 *
 *      int v[]   ---->   int *v   (pointer to v[0])
 *
 * Therefore, inside a function we can access elements using pointer arithmetic.
 */

// Function prototype:
// - Receives a pointer to the first element of the array (int *vector)
// - Receives the array size (vectorSize)
int printArray(int *vector, int vectorSize);

int main() {

    int vectorLength = 0;

    // Read the length of the array
    printf("Insert the vector length: ");
    scanf("%d", &vectorLength);

    // Declare an array with the given length (VLA - Variable Length Array)
    int vector[vectorLength];

    // Initialize random generator
    srand(time(NULL));

    // Fill the array with random values
    for (int i = 0; i < vectorLength; i++) {
        vector[i] = rand() % 100;
    }

    // Call the function to print the array.
    // Here we pass 'vector', which represents the address of its first element:
    //   vector == &vector[0]
    printArray(vector, vectorLength);

    return 0;
}

/**
 * printArray
 *
 * This function prints the content of an array using POINTER ARITHMETIC.
 *
 * IMPORTANT EQUIVALENCE (core rule):
 *   v[i]  is exactly the same as  *(v + i)
 *
 * Why?
 * - v is a pointer to the first element of the array (address of v[0])
 * - (v + i) means "move i positions forward"
 * - *(v + i) means "take the value stored at that address"
 *
 * Example:
 *   int v[5] = {10, 20, 30, 40, 50};
 *   v      points to v[0]
 *
 *   v + 0  -> address of v[0]
 *   v + 1  -> address of v[1]
 *   v + 2  -> address of v[2]
 *
 * Dereferencing:
 *   *(v + 0) == v[0]
 *   *(v + 1) == v[1]
 *   *(v + 2) == v[2]
 *
 * Pointer arithmetic automatically uses sizeof(type):
 * - if v is int*, then (v + 1) moves by sizeof(int) bytes
 * - so it points to the next integer in memory
 */
int printArray(int *array, int arrayLength) {

    printf("Array printed with pointers: [");

    // Scan the array from index 0 to arrayLength - 1
    for (int i = 0; i < arrayLength; i++) {

        // Instead of using array[i], we use pointer arithmetic:
        // array[i]  <==>  *(array + i)
        printf("%d", *(array + i));

        // Print comma between elements (but not after the last one)
        if (i < arrayLength - 1) {
            printf(", ");
        }
    }

    printf("]\n");

    // Returning 0 here means "success", but for a printing function
    // it could also be declared as void (no return value needed).
    return 0;
}