#include <stdio.h>

/** ------------- Exercise 3 - Swap with pointers ------------------
 *  Write a C program that:
 *  - Create a function to swap two numbers with pointers
 *  - Verify in the main if the swap is successfully executed
 */

int swapNumbers(int *, int *);

int main() {

    int a = 0, b = 0;

    do {
        printf("Insert number a and number b to swap: ");
        scanf("%d %d", &a, &b);
        if (a < 0 || b < 0) {
            printf("Invalid numbers inserted!\n");
        }
    } while (a < 0 || b < 0);

    printf("Values before swap: a = %d, b = %d\n", a, b);

    swapNumbers(&a, &b);

    printf("Values after swap: a = %d, b = %d\n", a, b);

    return 0;
}

int swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    return 0;
}