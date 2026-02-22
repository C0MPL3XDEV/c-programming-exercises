#include <stdio.h>

/** -------------- Exercise 1 - Matrices -----------------
 *  Write a C program that:
 *   - Read a matrix of size n x m
 *   - Computes and Prints:
 *      - The sum of each row
 *      - The sum of each column
 */
int main() {

    int n, m;

    do {
        printf("Insert matrix dimension (n x m): ");
        scanf("%d %d", &n, &m);
        if (n <= 0 || m <= 0) {
            printf("Invalid dimension!\n");
        }
    } while (n <= 0 || m <= 0);

    int numbers_matrix[n][m];

    // fill the matrix

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Insert element [%d][%d]: ", i, j);
            scanf("%d", &numbers_matrix[i][j]);
        }
    }

    // Print the matrix:

    printf("\nMatrix: \n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", numbers_matrix[i][j]);
        }
        printf("\n");
    }

    // Sum of each row

    printf("\nSum of each row: \n");

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += numbers_matrix[i][j];
        }
        printf("The sum of row %d is: %d\n", i, sum);
    }

    // Sum of each column

    printf("\nSum of each column: \n");
    for (int j = 0; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += numbers_matrix[i][j];
        }
        printf("The sum of column %d is: %d\n", j, sum);
    }

    return 0;
}