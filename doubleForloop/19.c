#include <stdio.h>

int pows(int b, int r) {
    int p = 1;
    for (int z = 1; z <= r; z++) {
        p = p * b;
    }
    return p;
}

int fact(int v) {
    int factorial = 1;
    for (int m = v; m >= 1; m--) {
        factorial = factorial * m;
    }
    return factorial;
}

int main() {
    int x, n;
    
    printf("Input the value of x: ");
    scanf("%d", &x);
    
    printf("Input number of terms: ");
    scanf("%d", &n);
    
    float sum = 0.0;
    
    for (int i = 0; i < n; i++) {
        float temp = (float)pows(x, i) / fact(i);
        sum = sum + temp;
    }
    
    printf("The sum is: %.3f\n", sum);
    
    return 0;
}
