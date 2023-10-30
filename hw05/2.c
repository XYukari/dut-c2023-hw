#include <stdio.h>

int is_perfect_number(int n) {
    int sum = 0, i;
    for (i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main() {
    int i;
    for (i = 1; i <= 1000; i++) {
        if (is_perfect_number(i))
            printf("%d ", i);
    }
    return 0;
}