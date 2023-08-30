#include <stdio.h>

void printArray(int arr[], int size) {
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i != size - 1) {
            printf(" ");
        }
    }
    printf(" }\n");
}

int main() {
    int size1, size2;

    printf("Enter the number of elements for Array 1: ");
    scanf("%d", &size1);

    int arr1[size1];
    printf("\nEnter the elements of Array 1:\n");
    for (int i = 0; i < size1; i++) {
        printf("\nEnter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Sort the first array
    for (int i = 0; i < size1 - 1; i++) {
        for (int j = 0; j < size1 - i - 1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }

    printf("\nElements of Array 1: ");
    printArray(arr1, size1);

    printf("\nSorted elements of Array 1: ");
    printArray(arr1, size1);

    printf("\nEnter the number of elements for Array 2: ");
    scanf("%d", &size2);

    int arr2[size2];
    printf("\nEnter the elements of Array 2:\n");
    for (int i = 0; i < size2; i++) {
        printf("\nEnter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Sort the second array
    for (int i = 0; i < size2 - 1; i++) {
        for (int j = 0; j < size2 - i - 1; j++) {
            if (arr2[j] > arr2[j + 1]) {
                int temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }

    printf("\nElements of Array 2: ");
    printArray(arr2, size2);

    printf("\nSorted elements of Array 2: ");
    printArray(arr2, size2);

    int maxSize = size1 > size2 ? size1 : size2;
    int unionArray[maxSize];
    int intersectionArray[maxSize];
    int unionSize = 0;
    int intersectionSize = 0;

    // Find union and intersection
    int i = 0, j = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] == arr2[j]) {
            unionArray[unionSize++] = arr1[i];
            intersectionArray[intersectionSize++] = arr1[i];
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            unionArray[unionSize++] = arr1[i];
            i++;
        } else {
            unionArray[unionSize++] = arr2[j];
            j++;
        }
    }

    while (i < size1) {
        unionArray[unionSize++] = arr1[i];
        i++;
    }

    while (j < size2) {
        unionArray[unionSize++] = arr2[j];
        j++;
    }

    printf("\nIntersection is: ");
    printArray(intersectionArray, intersectionSize);

    printf("\nUnion is: ");
    printArray(unionArray, unionSize);

    return 0;
}

