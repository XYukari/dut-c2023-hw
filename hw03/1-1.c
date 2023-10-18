#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;
    printf("请输入一个正整数：");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("%d 的阶乘为 %lld\n", n, fact);
    return 0;
}