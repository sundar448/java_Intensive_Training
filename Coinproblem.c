#include <stdio.h>

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    int coin10 = amount / 10;
    int rem = amount % 10;

    int coin5 = rem / 5;
    rem = rem % 5;

    int coin2 = rem / 2;
    rem = rem % 2;

    int coin1 = rem;

    printf("₹10 coins: %d\n", coin10);
    printf("₹5 coins: %d\n", coin5);
    printf("₹2 coins: %d\n", coin2);
    printf("₹1 coins: %d\n", coin1);

    return 0;
}
