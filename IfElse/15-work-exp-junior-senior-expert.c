#include<stdio.h>
int main(){
    int age;
    int year_of_work_experience;
    printf("Enter your current age:");
    scanf("%d", &age);
    printf("Enter your year_of_work_experience:");
    scanf("%d", &year_of_work_experience);

    if (age < 25 && year_of_work_experience < 1)
        printf("Entry level");

    else if (age >= 25 && age < 40 && year_of_work_experience >= 1 && year_of_work_experience < 5)
        printf("Junior");

    else if (age >= 40 && year_of_work_experience >= 5 && year_of_work_experience < 10)
        printf("Senior");

    else if (age >= 40 && year_of_work_experience >= 10)
        printf("Expert");
}