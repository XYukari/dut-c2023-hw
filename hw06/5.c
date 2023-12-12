#include <stdio.h>
#include <string.h>

void change(char* s) {
    int n = strlen(s), i;
    for (i = 0; i < n; i++) {
        s[i] += 4;
        if (s[i] > 'z') {
            s[i] -= 26;
        }
    }
}

void insert(char* s) {
    int n = strlen(s), i;
    for (i = n; i >= 0; i--) {
        s[i * 2] = s[i];
        s[i * 2 + 1] = ' ';
    }
}

int main() {
    char s[100];
    scanf("%s", s);
    change(s);
    insert(s);
    printf("%s\n", s);
    return 0;
}