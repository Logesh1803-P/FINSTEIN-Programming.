#include<stdio.h>
int main(){
    int year;
    printf("Enter your year:");
    scanf("%d", &year);
    if (year%400 == 0 && year%100 == 0)
         printf("%d is leap year\n",year);
    else if (year%100 == 0)
    {
        printf("%d is not leap year\n",year);
    }
    else if (year%4 == 0)
    {
        printf("%d is leap year\n",year);
    }
    else
    printf("%d is not leap year\n", year);
    
}