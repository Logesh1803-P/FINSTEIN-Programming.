#include <stdio.h>
int main(){
    int age;
    int income;
    const int middle_income_treshold = 15000;
    const int high_income_treshhold = 50000;
    printf("Enter your age:");
    scanf("%d", & age);
    printf("Enter your income:");
    scanf("%d", &income);

    if(age < 18 && age > 65)
        printf("No retirement Saving Needed");
    
    else if(income < middle_income_treshold)
        printf("Low Retirement Saving Goal");

    else if (income > middle_income_treshold && income < high_income_treshhold)
        printf("Middle Retirement Saving Goal");

    else if (income > high_income_treshhold)
        printf("High Retirement Savings Goal");
    return 0;

}