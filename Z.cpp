#include <stdio.h>

int main() {
    int T;
    double q, w, e, r, t;
    scanf("%d", &T); getchar();
    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf %lf", &q, &w, &e, &r); getchar();
        t = (2*q) + ((w/2)*4) + ((e/3)*4) + ((r/4)*2);
        printf("%.2lf\n", t);
    }
    return 0;
}

