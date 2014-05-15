#include <stdio.h>

/* fahr = 0, 20, ..., 300 に対して、
 * 摂氏 - 華氏対応表を作成する */
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* 温度表の上限 */
    upper = 300;    /* 上限 */
    step  = 20;     /* きざみ */
    fahr  = lower;

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

