#include <stdio.h>

/** ---------------- Exercise - Matrices (2D Arrays) ----------------
 *
 * This program works with a matrix (two-dimensional array) in C.
 *
 * A matrix in C is implemented as an array of arrays:
 *   - each row is an array
 *   - all rows have the same number of columns
 *
 * Conceptually, a matrix of size n x m has:
 *   - n rows
 *   - m columns
 *
 * Each element is accessed using two indices:
 *   matrix[row][column]
 *
 * Indices always start from 0.
 */

int main() {

    int n, m;

    // Read matrix dimensions with validation
    // n = number of rows
    // m = number of columns
    do {
        printf("Insert matrix dimension (n x m): ");
        scanf("%d %d", &n, &m);
        if (n <= 0 || m <= 0) {
            printf("Invalid dimension!\n");
        }
    } while (n <= 0 || m <= 0);

    // Declare the matrix
    //
    // numbers_matrix is a two-dimensional array with:
    //   - n rows
    //   - m columns
    //
    // Memory layout (row-major order):
    // All elements of the first row are stored contiguously,
    // followed by all elements of the second row, and so on.
    int numbers_matrix[n][m];

    // ---------------- Fill the matrix ----------------
    //
    // To access all elements of a matrix, we use two nested loops:
    //   - the outer loop iterates over rows
    //   - the inner loop iterates over columns
    //
    // numbers_matrix[i][j]:
    //   i -> row index
    //   j -> column index
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Insert element [%d][%d]: ", i, j);
            scanf("%d", &numbers_matrix[i][j]);
        }
    }

    // ---------------- Print the matrix ----------------
    //
    // The same nested loop structure is used to print the matrix
    // row by row.
    printf("\nMatrix:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", numbers_matrix[i][j]);
        }
        // New line after each row
        printf("\n");
    }

    // ---------------- Sum of each row ----------------
    //
    // For each row i:
    //   - initialize a sum variable to 0
    //   - scan all columns of that row
    //   - accumulate the values
    //
    // The inner loop varies the column index j,
    // while the row index i stays fixed.
    printf("\nSum of each row:\n");

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += numbers_matrix[i][j];
        }
        printf("The sum of row %d is: %d\n", i, sum);
    }

    // ---------------- Sum of each column ----------------
    //
    // For each column j:
    //   - initialize a sum variable to 0
    //   - scan all rows of that column
    //   - accumulate the values
    //
    // Here, the outer loop varies the column index j,
    // while the inner loop varies the row index i.
    printf("\nSum of each column:\n");

    for (int j = 0; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += numbers_matrix[i][j];
        }
        printf("The sum of column %d is: %d\n", j, sum);
    }

    return 0;
}