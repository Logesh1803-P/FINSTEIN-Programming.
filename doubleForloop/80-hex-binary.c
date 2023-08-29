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
    char hex[100];
    printf("Input a hex number: ");
    scanf("%s", hex);

    int n_hex = 0;
    int hex_length = strlen(hex);
    int base = 16;

    for (int i = hex_length - 1, pow = 0; i >= 0; i--, pow++) {
        int digit_value;
        if (hex[i] >= '0' && hex[i] <= '9') {
            digit_value = hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            digit_value = hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            digit_value = hex[i] - 'a' + 10;
        } else {
            printf("Invalid input\n");
            return 1;  // Exit the program due to invalid input
        }

        n_hex += digit_value * pows(base, pow);
    }

    printf("The decimal num is %d\n", n_hex);

    int n_bin = n_hex, r_bin, k;
    int bin_array[100];
    int i_bin = 0;

    for (k = 0; n_bin > 0; k++) {
        r_bin = n_bin % 2;
        n_bin = n_bin / 2;
        bin_array[i_bin] = r_bin;
        i_bin++;
    }

    printf("The binary num is ");
    for (int j = i_bin - 1; j >= 0; j--) {
        printf("%d", bin_array[j]);
    }
    printf("\n");

    return 0;
}
