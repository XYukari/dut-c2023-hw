#include <stdio.h>

int draw1() {
    int i, j;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++)
            putchar('*');
        for (j = i + 1; j <= 10; j++)
            putchar(' ');
        putchar('\n');
    }
}

int draw2() {
    int i, j;
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            putchar('*');
        for (j = i + 1; j <= 10; j++)
            putchar(' ');
        putchar('\n');
    }
}

int draw3() {
    int i, j;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++)
            putchar(' ');
        for (j = i + 1; j <= 10; j++)
            putchar('*');
        putchar('\n');
    }
}

int draw4() {
    int i, j;
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            putchar(' ');
        for (j = i + 1; j <= 10; j++)
            putchar('*');
        putchar('\n');
    }
}

int main() {
    int n;
    printf("请输入1~4中的一个数：");
    scanf("%d", &n);
    switch (n) {
        case 1:
            draw1();
            break;
        case 2:
            draw2();
            break;
        case 3:
            draw3();
            break;
        case 4:
            draw4();
            break;
    }
    return 0;
}