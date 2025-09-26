#include <stdio.h>

int main() {
    int a = 10;
    int *b = &a;

    printf("Initial value of a: %d\n", a);

    *b = 200;

    printf("Updated value of a: %d\n", a);

    return 0;
}
