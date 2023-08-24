#include<stdio.h>
int main(){
    float gpa;
    printf("Enter your GPA:");
    scanf("%f", & gpa);
    // printf("%.2f",gpa);
    if(gpa < 2.0)
        printf("Academic Probation");
    else
        printf("Good Standing");
}