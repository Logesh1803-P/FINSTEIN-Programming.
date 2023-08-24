#include <stdio.h>

int main() {

    int year, remainder, privious_leap_year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("%d is a leap year.",year);
    
    else {
    remainder = year % 4;

    privious_leap_year = year - remainder;

    printf("privious_leap_year: %d\n", privious_leap_year);
    }
return 0;
}
