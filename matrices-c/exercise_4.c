#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** -------------- Exercise 4 - Matrices -----------------
 * Write a C program that:
 * - Finds and prints the max value of each row of a matrix
 */


int main() {

    int matrixRow, matrixCol;

    do {
        printf("Insert matrix dimension (n x m): ");
        scanf("%d %d", &matrixRow, &matrixCol);
        if (matrixRow <= 0 || matrixCol <= 0) {
            printf("Invalid matrix dimension!\n");
        }
    } while (matrixRow <= 0 || matrixCol <= 0);

    int numbers_matrix[matrixRow][matrixCol];

    // Fill the matrix
    srand(time(NULL));

    for (int i = 0; i < matrixRow; i++) {
        for (int j = 0; j < matrixCol; j++) {
            numbers_matrix[i][j] = rand() % 100;
        }
    }

    // Print the matrix
    printf("Matrix Generated:\n");
    for (int i = 0; i < matrixRow; i++) {
        for (int j = 0; j < matrixCol; j++) {
            printf("%d ", numbers_matrix[i][j]);
        }
        printf("\n");
    }

    // Find the max value foreach
    for (int i = 0; i < matrixRow; i++) {
        int max = numbers_matrix[i][0];
        for (int j = 1; j < matrixCol; j++) {
            if (numbers_matrix[i][j] > max) {
                max = numbers_matrix[i][j];
            }
        }
        printf("The max value of row %d is: %d\n", i, max);
    }

    return 0;
}