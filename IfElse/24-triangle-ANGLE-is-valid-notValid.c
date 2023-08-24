#include <stdio.h>

int main(){

    float angle1;
    float angle2;
    float angle3;
    float sum;
    printf("Enter angle1:");
    scanf("%f",&angle1);
    printf("Enter angle2:");
    scanf("%f", &angle2);
    printf("Enter angle3:");
    scanf("%f", &angle3);
     
    sum = angle1 + angle2 +angle3;
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
        printf("triangle is valid");
    else
        printf("triangle is not valid");
}