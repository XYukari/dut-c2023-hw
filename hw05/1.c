#include <stdio.h>

int cnt, v[1000010], prime[500010];

int main() {
    int i, j, n;
    for (i = 2; i <= 1e6; i++) {
        if (!v[i])
            prime[++cnt] = i;
        for (j = 1; j <= cnt; j++) {
            if (i * prime[j] > 1e6)
                break;
            v[i * prime[j]] = 1;
            if (i % prime[j] == 0)
                break;
        }
    }
    scanf("%d", &n);
    while (n % 2 || n < 6) {
        printf("请重新输入：");
        scanf("%d", &n);
    }
    for (i = 1; i <= cnt; i++) {
        if (!v[n - prime[i]]) {
            printf("%d = %d + %d\n", n, prime[i], n - prime[i]);
            break;
        }
    }
    return 0;
}