#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int result = add(num1, num2);
    printf("The sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}
