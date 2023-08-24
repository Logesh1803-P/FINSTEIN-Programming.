#include<stdio.h>
int main(){
    float num;
    printf("Enter a Number:");
    scanf("%f", &num);
    if (num > 0)
        printf("Positive");

    else if (num < 0)
        printf("Negative");

    else if (num == 0)
        printf("ZERO");

    else
        printf("ERROR");

    return 0;
}