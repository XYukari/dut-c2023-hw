#include <malloc.h>
#include <stdio.h>

int is_prime(int n) {
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, i, cnt = 0, tmp;
    int* ans = (int*)malloc(sizeof(int) * 32);
    printf("请输入一个正整数：");
    scanf("%d", &n);
    if (is_prime(n)) {
        puts("是质数");
        return 0;
    }
    tmp = n;
    for (i = 2; i * i <= tmp; i++) {
        while (tmp % i == 0) {
            ans[++cnt] = i;
            tmp /= i;
        }
    }
    if (tmp)
        ans[++cnt] = tmp;
    printf("%d = ", n);
    for (i = 1; i <= cnt; i++) {
        printf("%d", ans[i]);
        if (i != cnt)
            printf(" * ");
    }
    return 0;
}