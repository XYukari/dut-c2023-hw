#include <math.h>
#include <stdio.h>

int main() {
    double pi = 0;
    int i;
    for (i = 1; i <= 1e6; i++) {
        pi += pow(-1, i - 1) / (2 * i - 1);
    }
    pi *= 4;
    printf("pi = %lf\n", pi);
    return 0;
}