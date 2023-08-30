#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int main() {
    int num1, num2;

    printf("Enter the value of num1 and num2: ");
    scanf("%d %d", &num1, &num2);

    printf("Prime numbers are:\n");
    for (int num = num1; num <= num2; num++) {
        if (isPrime(num)) {
            printf("%d\n", num);
        }
    }

    return 0;
}

