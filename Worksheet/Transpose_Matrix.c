#include <stdio.h>

void transposeMatrix(int mat[][3], int trans[][2], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            trans[j][i] = mat[i][j];
        }
    }
}

void displayMatrix(int mat[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 2;
    int cols = 3;
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int transposedMatrix[3][2];

    printf("Original Matrix:\n");
    displayMatrix(matrix, rows, cols);

    transposeMatrix(matrix, transposedMatrix, rows, cols);
    printf("\n");

    printf("Transposed Matrix : \n");
    displayMatrix(transposedMatrix, cols, rows);
    printf("\n");

    return 0;
}

