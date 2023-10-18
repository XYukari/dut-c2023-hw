#include <stdio.h>

int main() {
    double a, b;
    char op[1];
    printf("请输入表达式[操作数a 运算符op 操作数b]：");
    scanf("%lf%s%lf", &a, op, &b);
    if (op[0] == '+') {
        printf("%lf\n", a + b);
    } else if (op[0] == '-') {
        printf("%lf\n", a - b);
    } else if (op[0] == '*') {
        printf("%lf\n", a * b);
    } else {
        printf("%lf\n", a / b);
    }
    return 0;
}