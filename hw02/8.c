#include <stdio.h>

int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year, month, day;
    int max_month = 12, max_day;
    printf("请输入年月日：");
    scanf("%d%d%d", &year, &month, &day);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
        month == 10 || month == 12)
        max_day = 31;
    else if (month == 2) {
        if (is_leap_year(year))
            max_day = 29;
        else
            max_day = 28;
    } else
        max_day = 30;
    if (month > max_month || day > max_day)
        puts("日期不合法");
    else
        puts("日期合法");
    return 0;
}