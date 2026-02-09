#include <stdio.h>

// --------------- Exercise 1 - Array ----------------
// Create a program that:
//  - Read n (max 30) - represent the number of elements
//  - Load a vector of n integers - Read from input n elements and store in the array
//  - Print it in forward and reverse order

#define VECTOR_MAX_SIZE 30

int main() {
    int n;

    do {
        printf("Insert vector length (MAX 30): ");
        scanf("%d", &n);

        if (n > VECTOR_MAX_SIZE || n < 1) {
            printf("Invalid vector size!");
        }

    } while (n > VECTOR_MAX_SIZE);

    int vector[n];

    printf("------------- INSERT VECTOR ELEMENTS ----------------\n");

    for (int i = 0; i < n; i++) {
        printf("Insert element %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    printf("------------- PRINT FORWARD VECTOR ----------------\n");

    for (int i = 0; i < n; i++) {
        printf("%d, ", vector[i]);
    }

    printf("\n-------------- PRINT REVERSE VECTOR ----------------\n");

    // Reverse printing of the array:
    // - the last element is at index n - 1
    // - the first element is at index 0
    // The loop starts from n - 1 and decrements the index (i--)
    // until all elements are printed in reverse order.

    for (int i = n - 1; i >= 0; i--) {
        printf("%d, ", vector[i]);
    }
}