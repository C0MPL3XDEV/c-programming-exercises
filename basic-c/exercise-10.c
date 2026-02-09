#include <stdio.h>

// -------------- Exercise 12 -------------
// Create a program to get in input a integer number > 0 and:
//      - Print the first even numbers
//      - Print the average in float format with 2 decimal digits.

int main() {
    int n, sum = 0;

    do {
        printf("Insert a number ( >0 ): ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Invalid number inserted!\n");
        }
    } while (n <= 0);


    for (int i = 1; i <= n; i++) { // Cycle to calculate the even numbers of the number inserted
        int even = 2 * i;
        printf("even = %d\n", even);
        sum += even;
    }

    printf("Average = %2.f", (float)sum / n);

    return 0;
}