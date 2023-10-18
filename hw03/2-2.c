#include <stdio.h>

int main() {
    double pi = 1;
    long long i;
    for (i = 1; i <= 1e6; i++) {
        pi *= (4.0 * i * i) / ((2 * i - 1) * (2 * i + 1));
    }
    pi *= 2;
    printf("pi = %lf\n", pi);
    return 0;
}