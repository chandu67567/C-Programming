#include <stdio.h>

// Function to calculate the power of a number
int calculatePower(int base, int exponent) {
    int result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;

    printf("Base number: ");
    scanf("%d", &base);

    printf("Exponent number: ");
    scanf("%d", &exponent);

    int power = calculatePower(base, exponent);

    printf("Output: %d\n", power);

    return 0;
}

