#include <stdio.h>

int peach(int day) {
    if (day == 10) {
        return 1;
    }
    return (peach(day + 1) + 1) * 2;
}

int main() {
    printf("%d\n", peach(1));
    return 0;
}