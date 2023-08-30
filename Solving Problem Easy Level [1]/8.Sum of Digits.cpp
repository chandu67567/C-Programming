#include <stdio.h>

int main() {
    int num, originalNum, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for later display

    while (num > 0) {
        digit = num % 10; // Get the last digit
        sum += digit;     // Add the digit to the sum
        num /= 10;        // Remove the last digit from the number
    }

    printf("Given number = %d => Sum of digits = %d\n", originalNum, sum);

    return 0;
}

