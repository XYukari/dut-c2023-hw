#include <stdio.h>

int main() {
    double e = 1;
    long long fact = 1;
    int i;
    for (i = 1; i <= 25; i++) {
        fact = fact * i;
        e += 1.0 / fact;
    }
    printf("e = %lf\n", e);
    return 0;
}