#include <stdio.h>

int main() {
    long int Q, W, E, R;
    long int Q1, W1, E1, R1;
    long int Q2, W2, E2, R2;

    scanf("(%ld+%ld)x(%ld-%ld)", &Q, &W, &E, &R); getchar();
    scanf("(%ld+%ld)x(%ld-%ld)", &Q1, &W1, &E1, &R1); getchar();
    scanf("(%ld+%ld)x(%ld-%ld)", &Q2, &W2, &E2, &R2); getchar();

    printf("%ld %ld %ld\n", (Q+W)*(E-R), (Q1+W1)*(E1-R1), (Q2+W2)*(E2-R2));
    return 0;
}		

