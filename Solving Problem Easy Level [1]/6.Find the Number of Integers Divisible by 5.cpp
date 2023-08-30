#include <stdio.h>

int main() {
    int start, end, count = 0, sum = 0;

    printf("Enter the starting and ending numbers of the range: ");
    scanf("%d %d", &start, &end);

    for (int num = start; num <= end; num++) {
        if (num % 5 == 0) {
            count++;
            sum += num;
        }
    }

    printf("Number of integers divisible by 5 in the range %d to %d: %d\n", start, end, count);
    printf("Sum of integers divisible by 5 in the range %d to %d: %d\n", start, end, sum);

    return 0;
}

