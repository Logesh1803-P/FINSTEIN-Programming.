#include<stdio.h>
int main()
{
    float temperature;
    printf("Enter the Your Temperature in `C:");
    scanf("%f", &temperature);
    if(temperature > 37.5)
        printf("FEVER");
    else
        printf("NO FEVER");
}