#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Reading matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Diagonal traversal
    printf("\nDiagonal Traversal:\n");
    for (int line = 0; line < rows + cols - 1; line++) {
        int start_col = line < rows ? 0 : line - rows + 1;
        int count = line < rows ? line + 1 : rows;

        for (int j = 0; j < count; j++) {
            int row = line - j;
            int col = start_col + j;

            if (row < rows && col < cols)
                printf("%d ", matrix[row][col]);
        }
    }

    printf("\n");
}