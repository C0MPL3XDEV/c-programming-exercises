#include <stdio.h>
#include <stdlib.h> // For random function
#include <time.h> // For random function

// ---------------- Exercise 3 - Array --------------- //
// Create a C program to:
//  - Reads n integers into an array
//  - Counts how many of them are even and how many are odd
//  - Prints the two counts

int main() {
    int array_dimension;

    do {
        printf("Insert array dimension: ");
        scanf("%d", &array_dimension);

        if (array_dimension <= 0) {
            printf("Invalid dimension!\n");
        }
    } while (array_dimension <= 0);

    int numbers_array[array_dimension]; // Array initialization

    // Random fill array
    srand(time(NULL)); // Seed the random number generator with current time to get different sequences

    for (int i = 0; i < array_dimension; i++) {
        numbers_array[i] = (rand() % 100) + 1; // Generate a random integer between 1 and 100 (inclusive)

        // How does it work:
        // - rand() = generate an random integer number (between 0 and RAND_MAX, usually is 32.767);
        // - % 100 = modulo operator its used to return the rest of the division for 100 any number
        //   divided for 100 returns rest between 0 and 99
        // - + 1 = it's the offset permit to translate the intervale from [0. 99] --> [1, 100]
        //
        // General Rule:
        // - To get numbers between min and max (included) we use this rule:
        // - number = (rand() % (max - min + 1)) + min;
        //
        // For generate float numbers we use this rule:
        // - f = rand() / float(RAND_MAX)
        //
        // Wint min and max range (float):
        // - f = min + (rand() / (float)RAND_MAX) * (max - min)
    }

    printf("\n---------------- GENERATED ARRAY ----------------\n");
    printf("[");
    for (int i = 0; i < array_dimension; i++) {
        printf("%d", numbers_array[i]);

        if (i < array_dimension - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    // Counters variables
    int even_counter = 0;
    int odd_counter = 0;

    for (int i = 0; i < array_dimension; i++) { // Cycle for to scan the array
        if (numbers_array[i] % 2 == 0) { // For each element of the array control if its even (% 2 == 0)
            even_counter++; // Increase the counter if its even;
        }

        if (numbers_array[i] % 2 != 0) { // For each element of the array control it its odd (% 2 != 0)
            odd_counter++; // Increase the counter if its odd;
        }
    }

    printf("------------------ RESULTS ----------------\n");
    printf("EVEN COUNTER OF THE ARRAY: %d\n", even_counter);
    printf("ODD COUNTER OF THE ARRAY: %d\n", odd_counter);

    return 0;
}