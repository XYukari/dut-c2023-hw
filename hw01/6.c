#include <stdio.h>

typedef struct {
    int h, m, s;
} time;

void read_time(time* t) {
    scanf("%d%d%d", &(*t).h, &(*t).m, &(*t).s);
}

time sub(time x, time y) {
    time res;
    res.h = x.h - y.h;
    res.m = x.m - y.m;
    res.s = x.s - y.s;
    if (res.s < 0) {
        res.s += 60;
        res.m--;
    }
    if (res.m < 0) {
        res.m += 60;
        res.h--;
    }
    return res;
}

int main() {
    int start_distance, end_distance, sub_distance;
    time start_time, end_time, sub_time;
    double hours, speed;

    printf("所有输入数据均为整数\n");
    printf("开始里程：\n");
    scanf("%d", &start_distance);
    printf("开始时间（时、分、秒）：\n");
    read_time(&start_time);
    printf("结束里程：\n");
    scanf("%d", &end_distance);
    printf("结束时间（时、分、秒）：\n");
    read_time(&end_time);

    sub_distance = end_distance - start_distance;
    sub_time = sub(end_time, start_time);
    printf("汽车行驶了%d公里\n", sub_distance);
    printf("消耗时间%d小时%d分%d秒\n", sub_time.h, sub_time.m, sub_time.s);

    hours = sub_time.h + sub_time.m / 60.0 + sub_time.s / 3600.0;
    speed = sub_distance / hours;
    printf("平均速度：%.4lf公里/小时", speed);

    return 0;
}