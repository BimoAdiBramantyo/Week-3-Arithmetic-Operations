#include <stdio.h>

int main() {
    int T, U, Ua;
    float final_grade;

    scanf("%d %d %d", &T, &U, &Ua);
    
    final_grade = (0.2 * T) + (0.3 * U) + (0.5 * Ua);
    printf("%.2f\n", final_grade);

    return 0;
}

