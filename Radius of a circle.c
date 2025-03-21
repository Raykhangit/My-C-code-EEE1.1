#include <stdio.h>
#include <math.h>

int main() {
    float area, radius;

    // Input the area of the circle
    printf("Enter the area of the circle: ");
    scanf("%f", &area);

    // Calculate the radius using the formula
    radius = sqrt(area / M_PI);

    // Output the result
    printf("The radius of the circle is: %.2f\n", radius);

    return 0;
}
