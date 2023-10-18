#include <stdio.h>

int main() {
    int m, i;
    long long sum = 0, fact = 1;
    printf("请输入一个正整数：");
    scanf("%d", &m);
    for (i = 1; i <= m; i++) {
        fact = fact * i;
        sum += fact;
    }
    printf("1~%d 的阶乘和为 %lld\n", m, sum);
    return 0;
}