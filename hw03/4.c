#include <malloc.h>
#include <stdio.h>

int main() {
    int* f = (int*)malloc(sizeof(int) * 20);
    int i;
    f[0] = 0, f[1] = 1;
    for (i = 2; i < 20; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (i = 0; i < 20; i++) {
        printf("%5d ", f[i]);
        if (i % 8 == 7)
            putchar('\n');
    }
    return 0;
}