#include <stdio.h>

int main() {
    int a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3;

    scanf("%d %d %d %d", &a1, &b1, &c1, &d1);
    scanf("%d %d %d %d", &a2, &b2, &c2, &d2);
    scanf("%d %d %d %d", &a3, &b3, &c3, &d3);
    
    float total1, total2, total3;
    total1 = ((float)a1 / 1 * 2) + ((float)b1 / 2 * 4) + ((float)c1 / 3 * 6) + ((float)d1 / 4 * 4);
    total2 = ((float)a2 / 1 * 2) + ((float)b2 / 2 * 4) + ((float)c2 / 3 * 6) + ((float)d2 / 4 * 4);
    total3 = ((float)a3 / 1 * 2) + ((float)b3 / 2 * 4) + ((float)c3 / 3 * 6) + ((float)d3 / 4 * 4);
    
    printf("%.2f\n", total1);
    printf("%.2f\n", total2);
    printf("%.2f\n", total3);
    
    return 0;
}
