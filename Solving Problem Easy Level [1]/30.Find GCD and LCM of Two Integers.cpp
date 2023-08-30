#include <stdio.h>

// Function to calculate the GCD of two numbers
int calculateGCD(int a, int b) {
    if (b == 0)
        return a;
    return calculateGCD(b, a % b);
}

// Function to calculate the LCM of two numbers
int calculateLCM(int a, int b) {
    return (a * b) / calculateGCD(a, b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = calculateGCD(num1, num2);
    int lcm = calculateLCM(num1, num2);

    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}

