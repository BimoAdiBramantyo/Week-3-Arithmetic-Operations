#include <stdio.h>
#include <math.h>

int main() {
    int N;
    long long possible_outcomes;

    scanf("%d", &N);

    possible_outcomes = pow(2, N) - 1;
    printf("%lld\n", possible_outcomes);

    return 0;
}

