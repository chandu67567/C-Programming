#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the First string: ");
    scanf("%s", str1);

    printf("Enter the Second string: ");
    scanf("%s", str2);

    int comparisonResult = strcmp(str1, str2);

    if (comparisonResult == 0) {
        printf("Both strings are equal\n");
    } else if (comparisonResult > 0) {
        printf("First string is greater than Second string\n");
    } else {
        printf("Second string is greater than First string\n");
    }

    return 0;
}

