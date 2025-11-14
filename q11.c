#include <stdio.h>

int main() {
    int a, b;
    int sum, diff, prod, rem;
    float quot;

    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    sum  = a + b;
    diff = a - b;
    prod = a * b;
    rem  = a % b;
    quot = (float)a / b;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %.2f\n", quot);
    printf("Remainder: %d\n", rem);

    return 0;
}

