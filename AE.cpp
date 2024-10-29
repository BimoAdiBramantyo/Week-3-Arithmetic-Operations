#include <stdio.h>

int main() {
    int N;
    long long total_points;

    scanf("%d", &N);

    total_points = 100 * N + 50 * (N * (N - 1)) / 2;
    printf("%lld\n", total_points);

    return 0;
}

