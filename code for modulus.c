#include <stdio.h>

int main() {
    int a, b, result;

    // Taking input from the user
    printf("Enter first integer (a): ");
    scanf("%d", &a);
    printf("Enter second integer (b): ");
    scanf("%d", &b);

    // Calculating modulus
    result = a % b;

    // Displaying the result
    printf("The modulus of %d and %d is: %d\n", a, b, result);

    return 0;
}
