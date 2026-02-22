#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** ----------------- Exercise - Main Diagonal (Square Matrix) -------------------
 * Write a C program that:
 *  - Reads a square matrix (n x n)
 *  - Prints the elements of the main diagonal
 *  - Computes and prints their sum
 *
 * Key concept:
 *  - In C, a matrix is accessed as matrix[row][column].
 *  - The main diagonal contains all elements where row index == column index.
 *    That means: (0,0), (1,1), (2,2), ..., (n-1, n-1).
 *  - Because row and column are the same on the diagonal, we can access it
 *    with a single index: matrix[i][i].
 */

int main() {

    int square_matrix_rows = 0;
    int square_matrix_columns = 0;

    // Read matrix dimensions and ensure the matrix is square (rows == columns)
    do {
        printf("Insert the number of columns and rows of the square matrix: ");
        scanf("%d %d", &square_matrix_columns, &square_matrix_rows);

        if (square_matrix_columns <= 0 || square_matrix_rows <= 0 ||
            square_matrix_columns != square_matrix_rows) {
            printf("Invalid matrix dimension! The matrix must be n x n.\n");
        }

    } while (square_matrix_columns <= 0 || square_matrix_rows <= 0 ||
             square_matrix_columns != square_matrix_rows);

    // Declare the square matrix.
    // numbers_square_matrix[row][column]
    int numbers_square_matrix[square_matrix_columns][square_matrix_rows];

    // Fill the matrix with random values (0–99)
    srand(time(NULL));

    for (int i = 0; i < square_matrix_columns; i++) {
        for (int j = 0; j < square_matrix_rows; j++) {
            numbers_square_matrix[i][j] = rand() % 100;
        }
    }

    // Print the generated matrix, row by row.
    printf("\nGenerated matrix:\n");
    for (int i = 0; i < square_matrix_columns; i++) {
        printf("[");
        for (int j = 0; j < square_matrix_rows; j++) {
            printf("%d", numbers_square_matrix[i][j]);
            if (j < square_matrix_rows - 1) {
                printf(", ");
            }
        }
        printf("]\n");
    }

    // ---------------- Main diagonal ----------------
    //
    // Main diagonal rule:
    //   element is on the main diagonal if row == column.
    // So instead of scanning the whole matrix and checking (i == j),
    // we can directly access the diagonal elements using:
    //   numbers_square_matrix[i][i]
    //
    // This is more efficient and clearer:
    // - We perform only n accesses (one per diagonal element)
    // - Not n*n checks with an if.
    printf("\nMain diagonal elements: ");

    int sum = 0; // Accumulator for the diagonal sum

    for (int i = 0; i < square_matrix_columns; i++) {
        // numbers_square_matrix[i][i] is the diagonal element at row i, column i
        printf("%d ", numbers_square_matrix[i][i]);
        sum += numbers_square_matrix[i][i];
    }

    // Print the final sum of the main diagonal
    printf("\nSum of the main diagonal: %d\n", sum);

    return 0;
}