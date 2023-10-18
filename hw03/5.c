#include <stdio.h>

int main() {
    double sum = 2;
    int i, n = 2, d = 1, tmp;
    for (i = 1; i < 20; i++) {
        tmp = d;
        d = n;
        n = d + tmp;
        sum += (double)n / d;
    }
    printf("前 20 项和为 %lf\n", sum);
    return 0;
}