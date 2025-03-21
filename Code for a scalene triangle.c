#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    // Input the sides of the triangle
    printf("Enter the length of the first side: ");
    scanf("%f", &a);
    printf("Enter the length of the second side: ");
    scanf("%f", &b);
    printf("Enter the length of the third side: ");
    scanf("%f", &c);

    // Calculate the semi-perimeter (s)
    s = (a + b + c) / 2;

    // Calculate the area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Output the result
    printf("The area of the scalene triangle is: %.2f\n", area);

    return 0;
}
