// Write a function to calculate the area of circle. (TSRS)

#include <stdio.h>

float areaOfCircle(float radius);

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = areaOfCircle(radius);

    printf("Area of Circle = %.2f\n", area);

    return 0;
}

float areaOfCircle(float radius) {
    return 3.14159 * radius * radius;
}