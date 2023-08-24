#include <stdio.h>

int main() {
    int i;
    int n;
    int count = 0;
    int found = 1;

    for (n = 2; count < 10; n++) {
        found = 1; // Reset found to 1 before each iteration

        for (i = 2; i <= n - 1; i++) {
            if (n % i == 0) {
                found = 0;
                break;
            }
        }

        if (found == 1) { // Use == for comparison
            printf("%d ", n);
            count++;
        }
    }

    return 0;
}
