#include <stdio.h>

int main() {
    int a[] = {1, 2, 2, 2, 3, 4, 3};
    int len = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; ) {
            if (a[i] == a[j]) {
                for (int k = j; k < len - 1; k++) {
                    a[k] = a[k + 1];
                }
                len--;
            } else {
                j++;
            }
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
