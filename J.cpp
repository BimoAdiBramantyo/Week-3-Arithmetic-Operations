#include <stdio.h>

int main() {
    int A, B;
    double percentage;

    scanf("%d %d", &A, &B);

    percentage = (double)B / A * 100;
    printf("%.4lf%%\n", percentage);

    return 0;
}

