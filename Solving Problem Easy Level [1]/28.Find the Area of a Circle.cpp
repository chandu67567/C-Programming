#include <stdio.h>

int main() {
    double pi = 3.14159; // Approximate value of pi
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = pi * radius * radius;

    printf("The area of the circle with radius %.2lf is: %.2lf\n", radius, area);

    return 0;
}

