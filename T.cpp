#include <stdio.h>

void convertTime(char *course, int startHour, int startMinute, int endHour, int endMinute) {
    startHour -= 1;
    endHour -= 1;
    printf("%s %02d:%02d-%02d:%02d\n", course, startHour, startMinute, endHour, endMinute);
}

int main() {
    char course[5][11];
    int startHour[5], startMinute[5], endHour[5], endMinute[5];

    for (int i = 0; i < 5; i++) {
        scanf("%s %d:%d-%d:%d", course[i], &startHour[i], &startMinute[i], &endHour[i], &endMinute[i]);
    }

    for (int i = 0; i < 5; i++) {
        convertTime(course[i], startHour[i], startMinute[i], endHour[i], endMinute[i]);
    }

    return 0;
}

