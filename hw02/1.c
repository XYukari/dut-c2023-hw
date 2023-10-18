#include <stdio.h>

void swap(int* a, int* b) {
    (*a) ^= (*b) ^= (*a) ^= (*b);
}

int main() {
    int a, b, c;
    printf("请输入三个整数：");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
        swap(&a, &b);
    if (a > c)
        swap(&a, &c);
    if (b > c)
        swap(&b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}