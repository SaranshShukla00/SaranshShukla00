#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    printf("matrix1[%d][%d]: ", i, j);
    scanf("%d", &matrix1[i][j]);
    }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    printf("matrix2[%d][%d]: ", i, j);
    scanf("%d", &matrix2[i][j]);
    }
    }
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
    }
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    printf("%d\t", sum[i][j]);
    }
    printf("\n");
    }
}