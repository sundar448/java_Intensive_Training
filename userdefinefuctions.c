//🔹 1. Function with no arguments and no return value
//- The function neither takes input nor returns output.
//- Used for tasks like printing messages or performing fixed operations.
#include <stdio.h>

void greet() {
    printf("Hello, world!\n");
}

int main() {
    greet();
    return 0;
}



//🔹 2. Function with arguments and no return value
//- Takes input but doesn’t return anything.
//- Useful for processing data without needing a result back.
#include <stdio.h>

void displaySum(int a, int b) {
    printf("Sum: %d\n", a + b);
}

int main() {
    displaySum(5, 3);
    return 0;
}



//🔹 3. Function with no arguments but with return value
//- Doesn’t take input but returns a result.
//- Often used when the function internally handles its own logic.
#include <stdio.h>

int getNumber() {
    return 42;
}

int main() {
    int num = getNumber();
    printf("Number: %d\n", num);
    return 0;
}



//🔹 4. Function with arguments and with return value
//- Most common type: takes input and returns output.
#include <stdio.h>

int multiply(int x, int y) {
    return x * y;
}

int main() {
    int result = multiply(4, 5);
    printf("Product: %d\n", result);
    return 0;
}



