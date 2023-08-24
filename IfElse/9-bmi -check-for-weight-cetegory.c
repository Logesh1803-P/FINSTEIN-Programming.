#include <stdio.h>
int main(){
    int height;
    int weight;
    printf("Enter your height:");
    scanf("%d",&height);
    printf("Enter your weight:");
    scanf("%d", &weight);
    // calculation for bmi
    float bmi;
    bmi = weight / (height * height);
    printf("%f",bmi);

    if( bmi < 18.5 && bmi >= 0)
        printf("Under weight");

    else if(bmi > 18.5 && bmi < 24.9)
        printf("Normal weight");

    else if(bmi > 25 && bmi < 29.9)
        printf("Overweight");

    else if(bmi > 30)
        printf("Obese");

    else
        printf("Give Proper weight");
// return 0;
}