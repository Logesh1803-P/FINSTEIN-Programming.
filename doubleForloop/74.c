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
    printf("Input a binary number:");
    scanf("%d", &n);
    int sum = 0;
    int base = 2;

    for (i = 0; n > 0; i++) {
        r = n % 10;
        n = n / 10;

        dec = r * pows(base, pow);
        pow++;
        sum = sum + dec;
    }

    // printf("%d ", sum);

    int num = sum;
    char hex[50];
    int rem;
    int l = 0;

    for (int k = 0; num > 0; k++) {
        rem = num % 16;
        num = num / 16;
        if (rem == 10) {
            printf("A");
            hex[k] = 'A';
            l++;
        } else if (rem == 11) {
            printf("B");
            hex[k] = 'B';
            l++;
        } else if (rem == 12) {
            printf("C");
            hex[k] = 'C';
            l++;
        } else if (rem == 13) {
            printf("D");
            hex[k] = 'D';
            l++;
        } else if (rem == 14) {
            printf("E");
            hex[k] = 'E';
            l++;
        } else if (rem == 15) {
            printf("F");
            hex[k] = 'F';
            l++;
        } else {
            hex[k] = rem + '0';
            l++;
        }
    }
    printf("\n");
    for (int z = l - 1; z >= 0; z--) {
        printf("%c", hex[z]);
    }
    // printf("\n");

    return 0;
}
