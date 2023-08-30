#include <stdio.h>

void matrixMultiplication(int A[][2], int B[][2], int result[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix(int matrix[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[2][2] = {{1, 4}, {3, 2}};
    int B[2][2] = {{1, 2}, {2, 1}};
    int result[2][2];

    printf("Matrix A:\n");
    printMatrix(A);

    printf("\nMatrix B:\n");
    printMatrix(B);

    matrixMultiplication(A, B, result);

    printf("\nMatrix A * B:\n");
    printMatrix(result);

    return 0;
}

