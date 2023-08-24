#include <stdio.h>

int main() {
    float basicSalary, grossSalary, hra, da;

    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    // Calculate HRA and DA b
    if (basicSalary <= 10000) {
        hra =  (basicSalary * 20 / 100) ;
        da = (basicSalary * 80 / 100) ;
    } else if (basicSalary <= 20000) {
        hra = (basicSalary * 25 / 100) ;
        da =  (basicSalary * 90 / 100) ;
    } else {
        hra = (basicSalary * 30 / 100) ;
        da = (basicSalary * 95 / 100) ;
    }

    // Calculate gross salary
    grossSalary = basicSalary + hra + da;
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}
