#include <stdio.h>

// ---------- Exercise 1 ----------
// Even or Odd - Create a program to
// check if a number is even or odd

int main() {
    int n = 0;
    printf("Insert a number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("The number %d is even.\n", n);
    } else {
        printf("The number %d is odd.\n", n);
    }
}