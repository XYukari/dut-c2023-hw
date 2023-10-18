#include <stdio.h>

int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void yesterday(int year, int month, int day) {
    if (day == 1) {
        if (month == 1) {
            year--;
            month = 12;
            day = 31;
        } else {
            if (month - 1 == 1 || month - 1 == 3 || month - 1 == 5 ||
                month - 1 == 7 || month - 1 == 8 || month - 1 == 10) {
                month--;
                day = 31;
            } else if (month == 3) {
                month = 2;
                if (is_leap_year(year))
                    day = 29;
                else
                    day = 28;
            } else {
                month--;
                day = 30;
            }
        }
    } else
        day--;
    printf("前一天是 %d %d %d\n", year, month, day);
}

void tomorrow(int year, int month, int day) {
    if (day == 31) {
        if (month == 12) {
            year++;
            month = 1;
            day = 1;
        } else if (month == 3) {
            month = 2;
            if (is_leap_year(year))
                day = 29;
            else
                day = 28;
        } else {
            month++;
            day = 1;
        }
    } else if (day == 30) {
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            month++;
            day = 1;
        } else
            day++;
    } else if (day == 29 && month == 2) {
        month = 3;
        day = 1;
    } else if (day == 28 && month == 2 && !is_leap_year(year)) {
        month = 3;
        day = 1;
    } else
        day++;
    printf("后一天是 %d %d %d\n", year, month, day);
}

int main() {
    int year, month, day;
    printf("请输入年月日：");
    scanf("%d%d%d", &year, &month, &day);
    yesterday(year, month, day);
    tomorrow(year, month, day);
    return 0;
}