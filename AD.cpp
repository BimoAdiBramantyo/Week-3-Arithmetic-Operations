#include <stdio.h>

int main() {
    int Ph, M, Pu;
    float total_damage;

    scanf("%d %d %d", &Ph, &M, &Pu);

    total_damage = 0.2 * Ph + 0.3 * M + 0.5 * Pu;
    printf("%.2f\n", total_damage);

    return 0;
}

