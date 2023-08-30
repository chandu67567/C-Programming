#include <stdio.h>

int main() {
    int array[] = {15, 50, 34, 20, 10, 79, 100};

    // Calculate the size of the array
    int size = sizeof(array) / sizeof(array[0]);

    printf("Size of the given array is %d\n", size);

    return 0;
}

