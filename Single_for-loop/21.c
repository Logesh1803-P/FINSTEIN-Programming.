#include <stdio.h>

int main() {
    int a[10] = {2, 3, 5, 5, 6, 4, 6};
    int b[10];
    int i, j;
    
    int k=0;
    int len = sizeof(a) / sizeof(a[0]);
    
    for (i = 0; i < len - 1; i++) {
    
        for (j = i + 1; j < len; j++) {
            if (a[i] == a[j]) {
                b[k] = a[j];
                k++;
                break;
                
            }
        }
    }
    int l = k;
    printf("%d ",l);
    printf("Duplicate elements: ");
    for (int z = 0; z < k; z++) {
        printf("%d ", b[z]);
    }

    return 0;
}
