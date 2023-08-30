#include <stdio.h>

int calculateFactorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * calculateFactorial(n - 1);
    }
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int factorial = calculateFactorial(num);
        printf("Factorial of %d is %d\n", num, factorial);
    }

    return 0;
}

