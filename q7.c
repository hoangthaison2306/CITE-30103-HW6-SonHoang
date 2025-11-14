#include <stdio.h>

#define PI_DEFINE 3.14159   // using #define

int main() {
    const float PI_CONST = 3.14159;   // using const

    float radius, area, circumference;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI_CONST * radius * radius;
    circumference = 2 * PI_DEFINE * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}

