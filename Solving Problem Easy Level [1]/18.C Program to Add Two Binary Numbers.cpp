#include <stdio.h>

int main() {
    long binary1, binary2;
    int i = 0, carry = 0, sum[20];

    printf("Enter the first binary number: ");
    scanf("%ld", &binary1);

    printf("Enter the second binary number: ");
    scanf("%ld", &binary2);

    while (binary1 != 0 || binary2 != 0) {
        sum[i++] = (binary1 % 10 + binary2 % 10 + carry) % 2;
        carry = (binary1 % 10 + binary2 % 10 + carry) / 2;
        binary1 /= 10;
        binary2 /= 10;
    }

    if (carry != 0) {
        sum[i++] = carry;
    }

    i--;

    printf("Sum of two binary numbers: ");
    while (i >= 0) {
        printf("%d", sum[i--]);
    }
    printf("\n");

    return 0;
}

