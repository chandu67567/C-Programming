#include <stdio.h>
#include <math.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the square root of the number
    double sqrtNum = sqrt(num);

    // Check if the square root is an integer (i.e., the number is a perfect square)
    if (sqrtNum == (int)sqrtNum) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}

