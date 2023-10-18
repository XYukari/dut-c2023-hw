#include <stdio.h>

int main() {
    double height, weight, t;
    printf("请输入身高、体重：");
    scanf("%lf%lf", &height, &weight);
    t = weight / (height * height);
    if (t < 18)
        puts("偏瘦");
    else if (t <= 25)
        puts("正常体重");
    else if (t < 27)
        puts("超重体重");
    else
        puts("肥胖");
    return 0;
}