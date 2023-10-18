#include <stdio.h>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int m, n, i;
    printf("请输入两个正整数：");
    scanf("%d%d", &m, &n);
    printf("最大公约数为 %d\n", gcd(m, n));
    return 0;
}