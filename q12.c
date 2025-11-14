
#include <stdio.h>

int main() {
    int a = 5, b = 3, res1, res2;

    // Fix 1: Using parentheses around (b << 1)
    res1 = a + (b << 1);       // 5 + (3 << 1) = 5 + 6 = 11

    // Fix 2: Using arithmetic instead of shifting
    res2 = a + 2 * b;          // 5 + 2*3 = 11

    printf("Using parentheses fix: %d\n", res1);
    printf("Using arithmetic fix: %d\n", res2);

    return 0;
}

