#include <stdio.h>

int main() {
    float height;

    printf("Enter the height of a person (in centimeters): ");
    scanf("%f", &height);

    if (height >= 180) {
        printf("Taller\n");
    } else if (height < 150) {
        printf("Dwarf\n");
    } else {
        printf("Average\n");
    }

    return 0;
}

