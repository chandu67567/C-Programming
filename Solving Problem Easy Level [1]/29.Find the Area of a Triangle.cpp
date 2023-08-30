#include <stdio.h>

int main() {
    double base, height, area;

    printf("Enter the base and height of the triangle: ");
    scanf("%lf %lf", &base, &height);

    area = 0.5 * base * height;

    printf("The area of the triangle is: %.2lf\n", area);

    return 0;
}

