#include <stdio.h>

int main() {
    int a[100] = {5, 4, 6, 3, 2};
    int new_array[20];
    int len = sizeof(a) / sizeof(a[0]);
    printf("%d ",len);
    int i, j = 0;

    for (i = 0; i < len; i++) {
        int array_pos = a[i];
        int fact = 1;

        for (int k = array_pos; k >= 1; k--) {  // Use a separate variable for the inner loop
            fact = fact * k;
        }
        new_array[j] = fact;
        j++;
    }

    for (int k = 0; k < 5; k++) {
        printf("%d ", new_array[k]);
    }

    return 0;
}
