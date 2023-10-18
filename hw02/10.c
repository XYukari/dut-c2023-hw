#include <stdio.h>

void print_num(int x) {
    if (x == 1)
        printf("壹");
    if (x == 2)
        printf("贰");
    if (x == 3)
        printf("叁");
    if (x == 4)
        printf("肆");
    if (x == 5)
        printf("伍");
    if (x == 6)
        printf("陆");
    if (x == 7)
        printf("柒");
    if (x == 8)
        printf("捌");
    if (x == 9)
        printf("玖");
}

int main() {
    int num;
    printf("请输入一个一万以内的整数：");
    scanf("%d", &num);
    int thousand = num / 1000;
    int hundred = num % 1000 / 100;
    int ten = num % 100 / 10;
    int one = num % 10;
    if (thousand) {
        print_num(thousand);
        printf("仟");
    }
    if (hundred) {
        print_num(hundred);
        printf("佰");
    } else if (thousand) {
        printf("零");
    }
    if (ten) {
        print_num(ten);
        printf("拾");
    } else if (thousand && hundred) {
        printf("零");
    }
    if (one)
        print_num(one);
    putchar('\n');
    return 0;
}