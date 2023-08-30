#include <stdio.h>

long binomialCoeff(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}

int main() {
    int numRows;

    printf("Enter the number of rows in the Pascal Triangle: ");
    scanf("%d", &numRows);

    printf("Pascal Triangle:\n");

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= numRows - i; j++) {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%4ld", binomialCoeff(i, j));
        }
        printf("\n");
    }

    return 0;
}

