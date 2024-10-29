#include <stdio.h>

int main() {
    int X, Y;
    int num_cards;

    scanf("%d %d", &X, &Y);
    num_cards = X / Y;
    printf("%d\n", num_cards);

    return 0;
}

