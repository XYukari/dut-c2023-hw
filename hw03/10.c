#include <stdio.h>
#include <string.h>

int main() {
    char s[5];
    int n, sum = 0, i;
    printf("请输入一个 5 位以内的数字：");
    scanf("%s", s);
    n = strlen(s);
    for (i = 0; i < n; i++) {
        sum += s[i] - '0';
        putchar(s[i]);
        if (i == n - 1)
            putchar('=');
        else
            putchar('+');
    }
    printf("%d", sum);
    return 0;
}