#include <stdio.h>

int main() {
    printf("Odd numbers between 10 and 30:\n");

    for (int i = 11; i <= 29; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
