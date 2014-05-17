#include <stdio.h>

int main() {
//     int c = getchar();
// 
//     while (c != EOF) {
//         // getchar() != EOF の時の値
//         printf("%d", c);
//         c = getchar();
//     }
//     // getchar() == EOF の時の値
//     printf("%d", c);
// 
//     return 0;

    int c = getchar();

    if (c != EOF) {
        printf("%d", getchar());
    }

    return 0;
}

