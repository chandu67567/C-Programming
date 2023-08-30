#include <stdio.h>

// Function to calculate the HCF of two numbers
int calculateHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int hcf = calculateHCF(num1, num2);

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);

    return 0;
}

