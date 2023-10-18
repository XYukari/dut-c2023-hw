#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int m, n, i;
    printf("请输入两个正整数：");
    scanf("%d%d", &m, &n);
    for (i = MIN(m, n); i; i--) {
        if (m % i == 0 && n % i == 0) {
            printf("最大公约数为 %d\n", i);
            break;
        }
    }
    return 0;
}