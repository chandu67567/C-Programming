#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements into array:\n");

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int total = (n + 1) * (n + 2) / 2; // Sum of all integers from 1 to n+1

    // Calculate the sum of array elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Find the missing number
    int missingNumber = total - sum;

    printf("Missing element is: %d\n", missingNumber);

    return 0;
}

