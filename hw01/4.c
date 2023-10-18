#include <math.h>
#include <stdio.h>

// 交换 x, y 的值
void swap(double* x, double* y) {
    double temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    double a, b, c;  // 三边边长
    double cosA, sinA, area;
    printf("请输入三边长度：");
    scanf("%lf%lf%lf", &a, &b, &c);
    // 强制令 a 为最大边
    if (b > a) {
        swap(&a, &b);
    }
    if (c > a) {
        swap(&a, &c);
    }
    // 检查是否能构成三角形
    if (b + c <= a) {
        printf("不是三角形！\n");
        return 0;
    }
    // 余弦定理求最大角余弦值
    cosA = (b * b + c * c - a * a) / (2.0 * b * c);
    // sinA^2 + cosA^2 = 1
    sinA = sqrt(1 - cosA * cosA);
    area = 0.5 * b * c * sinA;
    printf("最大角正弦值是：%lf\n", sinA);
    printf("三角形的面积是：%lf\n", area);
    return 0;
}