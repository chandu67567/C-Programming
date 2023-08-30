#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the numbers:\n");

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Cyclically permute the elements
    int temp = arr[n - 1]; // Store the last element

    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp; // Move the last element to the first position

    printf("Cyclically permuted numbers are given below:\n");

    // Print the permuted array
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

