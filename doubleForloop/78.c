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
    int n_oct, r, i, dec, pow = 0;  
    int a[100];
    printf("Input an octal number:");
    scanf("%d", &n_oct);
    int sum = 0;
    int base = 8;

    for (i = 0; n_oct > 0; i++) {  
        r = n_oct % 10;
        n_oct = n_oct / 10;

        dec = r * pows(base, pow);
        pow++;
        sum = sum + dec;
    }

    printf("The decimal num is %d\n", sum);
    
    int n_hex = sum, r_hex, k;  
    char hex_array[50];  
    int i_hex = 0;  

    for (k = 0; n_hex > 0; k++) {
        r_hex = n_hex % 16;
        n_hex = n_hex / 16;
        if (r_hex == 10) {
            printf("A");
            hex_array[i_hex] = 'A';
            i_hex++;
        } else if (r_hex == 11) {
            printf("B");
            hex_array[i_hex] = 'B';
            i_hex++;
        } else if (r_hex == 12) {
            printf("C");
            hex_array[i_hex] = 'C';
            i_hex++;
        } else if (r_hex == 13) {
            printf("D");
            hex_array[i_hex] = 'D';
            i_hex++;
        } else if (r_hex == 14) {
            printf("E");
            hex_array[i_hex] = 'E';
            i_hex++;
        } else if (r_hex == 15) {
            printf("F");
            hex_array[i_hex] = 'F';
            i_hex++;
        } else {
            printf("%d ", r_hex);
            hex_array[i_hex] = r_hex + '0';
            i_hex++;
        }
    }
    printf("\n");
    for (int z = i_hex - 1; z >= 0; z--) {
        printf("%c", hex_array[z]);
    }
    printf("\n");

    return 0;
}
