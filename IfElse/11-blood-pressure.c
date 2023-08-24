#include<stdio.h>
int main(){
    int systolic_blood_pressure;
    int diastolic_blood_pressure;
    printf("Enter your systolic_blood_pressure:");
    scanf("%d", &systolic_blood_pressure);
    printf("Enter your diastolic_blood_pressure:");
    scanf("%d",&diastolic_blood_pressure);
    if( systolic_blood_pressure < 120 && diastolic_blood_pressure <80)
        printf("Normal");
    
    else if(systolic_blood_pressure > 120 && systolic_blood_pressure < 129 && diastolic_blood_pressure < 80)
        printf("Elevated");

    else if(systolic_blood_pressure > 130 && systolic_blood_pressure < 139 || diastolic_blood_pressure > 80 && diastolic_blood_pressure < 89)
        printf("Stage 1 Hypertension");

    else if (systolic_blood_pressure > 140 || diastolic_blood_pressure > 90)
        printf("Stage 2 hypertension");

    else
        printf("give proper input");
}