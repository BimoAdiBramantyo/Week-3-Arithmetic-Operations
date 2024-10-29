#include <stdio.h>

int main() {
    int T = 3;
    scanf("%d", &T);
    
    long long P, N;
    double results[T];

    for (int i = 0; i < T; i++) {
        scanf("%lld %lld", &P, &N);
        results[i] = (double)(P * N) / 100.00;
    }

    for (int i = 0; i < T; i++) {
        printf("%.2f\n", results[i]);
    }

    return 0;
}
