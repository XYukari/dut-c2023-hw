#include <stdio.h>

int main() {
    char s[1];
    printf("请输入一个字符：");
    scanf("%s", s);
    if ('0' <= s[0] && s[0] <= '9')
        puts("数字");
    else if ('a' <= s[0] && s[0] <= 'z')
        puts("小写字母");
    else if ('A' <= s[0] && s[0] <= 'Z')
        puts("大写字母");
    else
        puts("其他字符");
    return 0;
}