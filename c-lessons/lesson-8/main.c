#include <stdio.h>

/*
 * ループ(for)
 * ループを1回スキップ continue
 * ループを抜ける break
 *
 */

int main(void) {
    int m;

    for (m = 0; m < 10; m++) {
        if (m == 3) {
            continue;
        }
        if (m == 8) {
            break;
        }

        printf("m: %d\n", m);
    }
}

