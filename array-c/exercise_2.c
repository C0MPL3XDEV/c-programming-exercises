#include <stdio.h>

// ------------------------ Exercise 2 - Array ------------------------- //
// Write a program to:
// - Reads integer n and then n integer values into an array
// - Determine:
//     - the minium value
//     - the max value
//     - the arithmetic mean of the values (arithmetic average) (float value)

int main () {
    int n;

    do {
        printf("Insert array dimension: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Invalid dimension!\n");
        }
    } while (n <= 0);

    int array[n];

    for (int i = 0;  i < n; i++) {
        printf("Insert element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int max = array[0]; // Initialize max value to first element of the array
    int min = array[0]; // Initialize min value to first element of the array
    int sum = 0; // Variable for the sum to calculate the average

    // In alternative to inizialized the max and min value we can use the limits.h library
    // We use INT_MIN and INT_MAX these two variables of the library represent the:
    //  - The smallest integer possible (INT_MIN)
    //  - The biggest integer possible (INT_MAX)

    // Cycle For to Determine the max and min value in the array

    for (int i = 0; i < n; i++) {

        if (array[i] > max) { // Compare if the current element scanned its greater than current max value
            max = array[i]; // if condition true update the value of max with the current element scanned
        }

        if (array[i] < min) { // Compare if the current element scanned its minor than current min value
            min = array[i]; // if condition true update the value of min with the current element scanned
        }

        sum += array[i];
    }

    float average = (float)sum / n;

    printf("---------------- RESULTS ---------------\n");
    printf("The MAX value in the array is: %d\n", max);
    printf("The MIN value in the array is: %d\n", min);
    printf("The AVERAGE value in the array is: %.2f", average);

    return 0;
}

