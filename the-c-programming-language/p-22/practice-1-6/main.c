#include <stdio.h>

int main() {
    int c;

    if ((c = getchar()) != EOF) {
        printf("%d\n", c);
    }

    printf("%d - at EOF\n", c);
}

