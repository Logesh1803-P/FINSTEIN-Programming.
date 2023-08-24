#include <stdio.h>

int main() {
    int a[] = {1, 2, 2, 3, 4, 3};

    int i, j, k;
    int len = sizeof(a) / sizeof(a[0]);
    
    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (a[i] == a[j]) {
                for (k = j; k < len - 1; k++) {
                    a[k] = a[k + 1];
                }
                len--; 
                j--;   
            }
        }
    }

    for (int z = 0; z < len; z++) {
        printf("%d ", a[z]);
    }

    return 0;
}
