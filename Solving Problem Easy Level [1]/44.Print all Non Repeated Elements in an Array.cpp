#include <stdio.h>

int main() {
    int n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter %d elements of an array:\n", n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print non-repeated elements
    printf("\nThe array after removing duplicates is: ");
    for (int i = 0; i < n; i++) {
        int isRepeated = 0;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isRepeated = 1;
                break;
            }
        }
        if (!isRepeated) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}

