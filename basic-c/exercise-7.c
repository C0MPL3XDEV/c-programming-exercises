#include <stdio.h>

// ----------- Exercise 7 ----------
// Create a program to sum N numbers inserted by input.

// ------------ FOR CYCLE -----------
// Pre-Conditional Cycle it's a cycle where the condition is verified before the execution of the cycle

int main() {
    int N, n, sum = 0;

    printf("Insert how many numbers want to sum: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Enter a number: ");
        scanf("%d", &n);
        sum += n;
    }

    printf("The sum of numbers is: %d", sum);
    return 0;
}