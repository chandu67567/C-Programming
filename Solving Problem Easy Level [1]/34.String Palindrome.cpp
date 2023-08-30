#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int isPalindrome = 1; // Assume the string is a palindrome initially

    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0; // If characters don't match, the string is not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}

