#include <stdio.h>

/* 入力を出力に複製 Ver.2 */
int main() {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}

