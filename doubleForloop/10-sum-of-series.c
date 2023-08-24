#include <stdio.h>
#include <math.h>

float fact(int n) {
    float factorial = 1.0;
    for (int i = 1; i <= n; i++) {
        factorial =factorial * i;
    }
    return factorial;
}

int main() {
    float x;
    int nth;

    printf("Input the value of X: ");
    scanf("%f", &x);

    printf("Input the value for nth term: ");
    scanf("%d", &nth);

    float sum = 0.0;
    float term_value = 0.0;

    for (int i = 0; i < nth; i++) {
        if (i % 2 == 0) {
            term_value = pow(x, 2 * i) / fact(2 * i);
        } else {
            term_value = -pow(x, 2 * i) / fact(2 * i);
        }

        printf("term %d value is: %f\n", i + 1, term_value);
        sum = sum + term_value;
    }

    printf("The sum of the above series is: %f\n", sum);

    return 0;
}
