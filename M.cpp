#include <stdio.h>

int main() {
    int X, Y;
    double percentage;

    scanf("%d %d", &X, &Y);

    percentage = ((double)X / Y) * 100;
    printf("%.2lf%%\n", percentage);

    return 0;
}

