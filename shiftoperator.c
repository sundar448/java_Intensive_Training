#include <stdio.h>

int main() {
    int a = 5;   // Binary: 00000101
    int b = a << 1;  // Left shift by 1: 00001010 (5 * 2 = 10)
    int c = a >> 1;  // Right shift by 1: 00000010 (5 / 2 = 2)

    printf("Original value: %d\n", a);
    printf("Left shift by 1: %d\n", b);
    printf("Right shift by 1: %d\n", c);

    return 0;
}
