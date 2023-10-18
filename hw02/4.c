#include <stdio.h>

int main() {
    double w, s, p, t;
    printf("输入货物重量，运输距离：");
    scanf("%lf%lf", &w, &s);
    if (s < 100)
        p = 30;
    else if (s < 200)
        p = 27.5;
    else if (s < 300)
        p = 25;
    else if (s < 400)
        p = 22.5;
    else
        p = 20;
    t = p * w * s;
    printf("总运费为：%.2lf\n", t);
}