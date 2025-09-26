#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    printf("Pre-increment of x: %d\n", ++x);
    printf("Post-increment of x: %d\n", x++);
    printf("Pre-decrement of y: %d\n", --y);
    printf("Post-decrement of y: %d\n", y--);
    printf("Final value of x: %d\n", x);
    printf("Final value of y: %d\n", y);

    return 0;
}
