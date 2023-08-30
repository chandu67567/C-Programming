#include <stdio.h>

int main() {
    int N, sum_even = 0, sum_odd = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    for (int num = 1; num <= N; num++) {
        if (num % 2 == 0) {
            sum_even += num;
        } else {
            sum_odd += num;
        }
    }

    printf("Sum of even numbers from 1 to %d: %d\n", N, sum_even);
    printf("Sum of odd numbers from 1 to %d: %d\n", N, sum_odd);

    return 0;
}

