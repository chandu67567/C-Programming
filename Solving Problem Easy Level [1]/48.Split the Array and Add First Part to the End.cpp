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

    int position;

    printf("Enter the position of the element to split the array: ");
    scanf("%d", &position);

    // Ensure the position is within the array's bounds
    if (position >= 1 && position <= n) {
        printf("The resultant array is\n");

        // Print the second part of the array
        for (int i = position; i < n; i++) {
            printf("%d\n", arr[i]);
        }

        // Print the first part of the array
        for (int i = 0; i < position; i++) {
            printf("%d\n", arr[i]);
        }
    } else {
        printf("Invalid position.\n");
    }

    return 0;
}

