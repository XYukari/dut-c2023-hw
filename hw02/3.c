#include <stdio.h>

void score_to_grade() {
    int score;
    printf("请输入分数：");
    scanf("%d", &score);
    if (score >= 85)
        puts("A");
    else if (score >= 70)
        puts("B");
    else if (score >= 60)
        puts("C");
    else
        puts("D");
}

void grade_to_score() {
    char grade[1];
    printf("请输入等级：");
    scanf("%s", grade);
    switch (grade[0]) {
        case 'A':
            puts("85~100");
            break;
        case 'B':
            puts("70~85");
            break;
        case 'C':
            puts("60~70");
            break;
        case 'D':
            puts("0~60");
    }
}

int main() {
    int mode;
    while (1) {
        printf("等级转分数请按[1]，分数转等级请按[2]，退出程序请按[3]：");
        scanf("%d", &mode);
        if (mode == 1)
            grade_to_score();
        else if (mode == 2)
            score_to_grade();
        else
            break;
    }
    return 0;
}