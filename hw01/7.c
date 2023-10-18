#include <stdio.h>

#define MINS_IN_HOUR 60;

int main() {
    int minutes, hours;
    while (1) {
        scanf("%d", &minutes);
        if (minutes <= 0) {
            break;
        }
        hours = minutes / MINS_IN_HOUR;
        minutes %= MINS_IN_HOUR;
        printf("%d %d\n", hours, minutes);
    }
    return 0;
}