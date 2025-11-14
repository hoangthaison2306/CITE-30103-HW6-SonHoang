#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);   // Fix: add & to pass address of n
    printf("You entered %d\n", n);
    return 0;
}

