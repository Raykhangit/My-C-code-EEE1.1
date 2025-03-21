#include <stdio.h>

int main() {
    float number, square, squareRoot;
    int i;

    printf(" Enter a number: ");
    scanf("%f", &number);

    square = number * number;

    // Calculate square root using a simple approximation method (Babylonian method)
    squareRoot = number / 2.0;
    for (i = 0; i < 10; i++) { // Iterate 10 times for better approximation
        squareRoot = (squareRoot + number / squareRoot) / 2.0;
    }

    printf("\n Square of %.2f is %.2f\n", number, square);
    printf("\n Square root of %.2f is %.2f\n", number, squareRoot);

    return 0;
}
