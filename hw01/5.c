#include <stdio.h>

#define min(x, y) ((x) < (y) ? (x) : (y))

int main() {
    int hour, minute;
    double t, T;
    printf("请输入两个整数，表示断电的小时和分钟数：\n");
    scanf("%d%d", &hour, &minute);
    t = hour + minute / 60.0;
    T = min(4 * t * t / (t + 2) - 20, 18);
    printf("此时温度是：%.2lf\n", T);
    return 0;
}