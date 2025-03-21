#include <stdio.h>

int main() {
    int a, b, bump ;
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    bump = a;
    a = b;
    b = bump;

    printf("\nAfter swapping: a = %d, b = %d\n", a, b);

    return 0;
}
