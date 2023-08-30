#include <stdio.h>

int main() {
    int arr[] = {12, 65, 32, 75, 48, 11};
    int n = 6; // Initial size of the array
    int elementToDelete = 75; // Element to be deleted

    printf("Original Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    // Find the index of the element to delete
    int deleteIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == elementToDelete) {
            deleteIndex = i;
            break;
        }
    }

    // If the element is found, delete it by shifting elements
    if (deleteIndex != -1) {
        for (int i = deleteIndex; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Reduce the size of the array
    }

    printf("\nNew Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}

