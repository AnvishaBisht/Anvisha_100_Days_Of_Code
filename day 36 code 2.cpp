//find the sum of all the elements in a matrix


#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix:\n");

    // Read matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
