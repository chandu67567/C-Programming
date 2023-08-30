#include <stdio.h>

int main() {
    int num, originalNum, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for later display

    while (num > 0) {
        digit = num % 10; // Get the last digit
        digit++;          // Increment the digit by 1
        sum += digit;     // Add the modified digit to the sum
        num /= 10;        // Remove the last digit from the number
    }

    printf("Given number = %d => Sum of modified digits = %d\n", originalNum, sum);

    return 0;
}

