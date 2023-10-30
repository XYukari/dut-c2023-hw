#include <stdio.h>

typedef long long i64;

i64 fact(int n) {
    i64 res = 1;
    int i;
    for (i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

i64 C(int n, int m) {
    return fact(n) / (fact(m) * fact(n - m));
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%lld\n", C(n, m));
    return 0;
}