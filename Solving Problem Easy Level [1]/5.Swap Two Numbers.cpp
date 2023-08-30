#include <stdio.h>

int main() {
    int m, n, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);

    printf("Before Swapping: m value = %d; n value = %d\n", m, n);

    // Swapping logic using a temporary variable
    temp = m;
    m = n;
    n = temp;

    printf("After Swapping: m value = %d; n value = %d\n", m, n);

    return 0;
}

