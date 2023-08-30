#include <stdio.h>

int main() {
    int constant;

    printf("Enter a constant integer: ");
    scanf("%d", &constant);

    printf("Multiplication Table for %d:\n", constant);

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", constant, i, constant * i);
    }

    return 0;
}

