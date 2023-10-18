#include <stdio.h>

int num[5];

int dfs(int k) {
    int i, res = 0;
    if (k == 3) {
        if (num[0] == num[1] || num[1] == num[2] || num[0] == num[2])
            return 0;
        for (i = 0; i < 3; i++)
            printf("%d", num[i]);
        putchar('\n');
        return 1;
    }
    for (i = 1; i <= 4; i++) {
        num[k] = i;
        res += dfs(k + 1);
    }
    return res;
}

int main() {
    printf("共计 %d 个数\n", dfs(0));
    return 0;
}