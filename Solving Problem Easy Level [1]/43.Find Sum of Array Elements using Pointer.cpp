#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter %d elements:\n", N);
    
    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum using pointers
    int sum = 0;
    int *ptr = arr; // Initialize pointer to the first element

    for (int i = 0; i < N; i++) {
        sum += *ptr; // Add the value pointed by ptr to the sum
        ptr++; // Move the pointer to the next element
    }

    printf("Sum of Elements of the array will be: %d\n", sum);

    return 0;
}

