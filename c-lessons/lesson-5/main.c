#include <stdio.h>

/*
条件分岐(if)
*/

int main(void) {
    int score = 55;

    if (score >= 60) {
        printf("OK!\n");
    }
    else if (score >= 50) {
        printf("so so...\n");
    }
    else {
        printf("NG!\n");
    }

    return 0;
}

