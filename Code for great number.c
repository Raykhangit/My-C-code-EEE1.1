#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the first number (A): ");
    scanf("%d", &a);

    printf("Enter the second number (B): ");
    scanf("%d", &b);

    printf("Enter the third number (C): ");
    scanf("%d", &c);

    if (a > b && a > c) {
        printf("The greatest number is A: %d\n", a);
    } else if (b > a && b > c) {
        printf("The greatest number is B: %d\n", b);
    } else {
        printf("The greatest number is C: %d\n", c);
    }

    return 0;
}
