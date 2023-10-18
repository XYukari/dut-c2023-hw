#include <math.h>
#include <stdio.h>

#define EPS 1e-6

void swap(double* a, double* b) {
    double tmp = *a;
    *a = *b;
    *b = tmp;
}

double area(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double a, b, c;
    printf("请输入三个数字：");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a > b)
        swap(&a, &b);
    if (a > c)
        swap(&a, &c);
    if (b > c)
        swap(&b, &c);
    if (a + b <= c) {
        puts("不是三角形");
        return 0;
    }
    if (fabs(a - b) < EPS && fabs(b - c) < EPS)
        puts("等边三角形");
    else if (a * a + b * b == c * c)
        puts("直角三角形");
    else
        puts("一般三角形");
    printf("面积为 %.2lf\n", area(a, b, c));
    return 0;
}