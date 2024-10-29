#include <stdio.h>

double undiscountedPrice(int N, int P) {
    return P / (1 - (N / 100.0));
}

int main() {
    int N1, P1, N2, P2, N3, P3, N4, P4;

    scanf("%d %d", &N1, &P1);
    scanf("%d %d", &N2, &P2);
    scanf("%d %d", &N3, &P3);
    scanf("%d %d", &N4, &P4);

    printf("$%.2f\n", undiscountedPrice(N1, P1));
    printf("$%.2f\n", undiscountedPrice(N2, P2));
    printf("$%.2f\n", undiscountedPrice(N3, P3));
    printf("$%.2f\n", undiscountedPrice(N4, P4));

    return 0;
}

