#include <stdio.h>

int main() {
    char char1, char2;
    int asciiChar;

    scanf("%c %c", &char1, &char2);
    asciiChar = char1 * char2;

    printf("%d\n", asciiChar);

    return 0;
}

