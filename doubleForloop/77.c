#include <stdio.h>
#include <string.h>

int pows(int b, int e) {
    int p = 1;
    if (e == 0) {
        return 1;
    }
    for (int i = 1; i <= e; i++) {
        p = p * b;
    }
    return p;
}

int main() {
    int n, r, i, dec, pow = 0;
    int a[100];
    printf("Input an octal number:");
    scanf("%d", &n);
    int sum = 0;
    int base = 8;

    for (i = 0; n > 0; i++) {
        r = n % 10;
        n = n / 10;

        dec = r * pows(base, pow);
        pow++;
        sum = sum + dec;
    }

    printf("The decimal num is %d\n", sum);

    int binary[100];
    i = 0;

    for (i = 0; sum > 0; i++) {
        r = sum % 2;
        sum = sum / 2;
        printf("%d ", r);
        binary[i] = r;
    }
    
    printf("The binary num is:\n");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", binary[j]);
    }

    return 0;
}
