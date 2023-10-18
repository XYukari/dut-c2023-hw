#include <math.h>
#include <stdio.h>

int main() {
    int x, i;
    double ex = 1;
    long long fact = 1;
    printf("请输入一个正整数：");
    scanf("%d", &x);
    for (i = 1; i <= 25; i++) {
        fact = fact * i;
        ex += pow(x, i) / fact;
    }
    printf("e^%d = %lf\n", x, ex);
    return 0;
}