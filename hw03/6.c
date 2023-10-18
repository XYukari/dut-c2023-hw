#include <malloc.h>
#include <stdio.h>
#include <string.h>

int main() {
    const int N = 1e6;
    int* v = (int*)malloc(sizeof(int) * (N + 1));
    int* prime = (int*)malloc(sizeof(int) * (N + 1));
    int i, j, size = 0, n, m, cnt = 0;

    memset(v, 0, sizeof(v));
    for (i = 2; i <= N; i++) {
        if (!v[i])
            prime[++size] = i;
        for (j = 1; j <= size; j++) {
            if (i * prime[j] > N)
                break;
            v[i * prime[j]] = 1;
            if (i % prime[j])
                break;
        }
    }

    printf("请输入两个正整数：");
    scanf("%d%d", &n, &m);
    for (i = 1; i <= size; i++) {
        if (n <= prime[i] && prime[i] <= m) {
            ++cnt;
            printf("%d ", prime[i]);
        }
    }
    putchar('\n');
    printf("共计 %d 个质数\n", cnt);
    return 0;
}