#include <stdio.h>
#include <math.h>

float fact(int v) {
    int f = 1;
    for (int j = v; j >= 1; j--) {
        f = f * j;
    }
    return f;
}

int main() {
    int x;
    int term;
    printf("Enter X value: ");
    scanf("%d", &x);
    printf("Enter the number of terms you want: ");
    scanf("%d", &term);

    float sum = 0.0;
    float G = 2.0;  // Initialize G outside the loop

    for (int i = 1; i <= term; i++) {
        if (i == 1) {
            printf("term %d value is: %d\n", i, i);
            sum = sum + i;
        } else if (i % 2 == 0) {
            // float div = G / fact(G);
            float Even_value = -pow(x,G)/ fact(G);
            printf("term %d value is: %f\n", i, Even_value);
            sum = sum + Even_value;
        } else {
            // float div = G / fact(G);
            float Odd_value = pow(x,G)/ fact(G);;
            printf("term %d value is: %f\n", i, Odd_value);
            sum = sum + Odd_value;
        }
        G = G + 2.0;  // Increment G after each iteration
    }

    printf("The sum of the above series is: %.5f\n", sum);
    return 0;
}
