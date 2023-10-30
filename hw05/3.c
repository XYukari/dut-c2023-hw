#include <stdio.h>

const int day_limit[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int is_leap_year(int y) {
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

int date_checker(int y, int m, int d) {
    if (m < 1 || m > 12)
        return 0;
    return !(d < 1 || d > day_limit[m - 1] + (m == 2 && is_leap_year(y)));
}

int counter(int y, int m, int d) {
    int cnt = 0, i;
    for (i = 1; i < m; i++) {
        cnt += day_limit[i - 1] + (m == 2 && is_leap_year(y));
    }
    return cnt + d;
}

int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    if (date_checker(y, m, d)) {
        puts("合法");
        printf("当年的第 %d 天", counter(y, m, d));
    } else
        puts("非法");
    return 0;
}