#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("Reversed number: %d\n", reversedNum);
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("Reversed number: %d\n", reversedNum);
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}

