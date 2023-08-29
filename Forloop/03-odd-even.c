#include <stdio.h>
#include <stdbool.h>

bool is_even(int n) {
    return n % 2 == 0;
    // return true;
}

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if (is_even(num)) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}
