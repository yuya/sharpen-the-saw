#include <stdio.h>

/*
演算子
+ - * / %(余り)

代入を伴う演算子
x = x + 5; -> x += 5;

単項演算子
++ --
*/

int main(void) {
    int x;

    x = 10 % 3; // 1
    x += 3;
    x++;

    printf("%d\n", x);

    return 0;
}

