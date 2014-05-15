#include <stdio.h>

/* fahr = 0, 20, ..., 300 に対して、
 * 摂氏 - 華氏対応表を作成する */
int main() {
    int fahr,
        celsius,
        lower,
        upper,
        step;

    lower = 0;      /* 温度表の上限 */
    upper = 300;    /* 上限 */
    step  = 20;     /* きざみ */
    fahr  = lower;

    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

