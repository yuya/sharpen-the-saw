#include <stdio.h>

// 条件分岐 (switch)

int main(void) {
    int rank = 20;

    switch(rank) {
        case 1:
            printf("Gold!\n");
            break;
        case 2:
            printf("Silver!\n");
            break;
        case 3:
            printf("Bronze!\n");
            break;
        default:
            printf("no medal...\n");
            break;
    }

    return 0;
}

