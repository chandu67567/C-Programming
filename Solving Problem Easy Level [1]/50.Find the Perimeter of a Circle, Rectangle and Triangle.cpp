#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

// Function to calculate the perimeter of a rectangle
double rectanglePerimeter(double length, double width) {
    return 2 * (length + width);
}

// Function to calculate the perimeter of a general triangle
double trianglePerimeter(double a, double b, double c) {
    return a + b + c;
}

// Function to calculate the perimeter of an equilateral triangle
double equilateralTrianglePerimeter(double a) {
    return 3 * a;
}

// Function to calculate the perimeter of a right-angled triangle
double rightAngledTrianglePerimeter(double width, double height) {
    return width + height + sqrt(width * width + height * height);
}

// Function to calculate the perimeter of a circle
double circlePerimeter(double radius) {
    return 2 * PI * radius;
}

int main() {
    double a, b, c, length, width, radius, width_tri, height_tri;

    printf("Enter the dimensions for rectangle (length width): ");
    scanf("%lf %lf", &length, &width);
    printf("Perimeter of rectangle: %.2lf\n", rectanglePerimeter(length, width));

    printf("\nEnter the sides of a general triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Perimeter of general triangle: %.2lf\n", trianglePerimeter(a, b, c));

    printf("\nEnter the side of an equilateral triangle: ");
    scanf("%lf", &a);
    printf("Perimeter of equilateral triangle: %.2lf\n", equilateralTrianglePerimeter(a));

    printf("\nEnter the width and height of a right-angled triangle: ");
    scanf("%lf %lf", &width_tri, &height_tri);
    printf("Perimeter of right-angled triangle: %.2lf\n", rightAngledTrianglePerimeter(width_tri, height_tri));

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);
    printf("Perimeter of circle: %.2lf\n", circlePerimeter(radius));

    return 0;
}

