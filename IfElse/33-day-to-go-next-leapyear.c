#include <stdio.h>

int main() {

    int year, remainder, difference, years_left_next_leap;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("%d is a leap year.",year);
    
    else {
    remainder = year % 4;

    difference = 4 - remainder;

    years_left_next_leap = difference;

    printf("Years left next leap year: %d\n", years_left_next_leap);
    }
return 0;
}
