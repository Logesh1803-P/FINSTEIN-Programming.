#include <stdio.h>
int main(){
    int weight;
    printf("Enter your weight in kg:");
    scanf("%d", &weight);

    if( weight < 18.5 && weight > 0)
        printf("Under weight");

    else if(weight > 18.5 && weight < 24.9)
        printf("Normal weight");

    else if(weight > 25 && weight < 29.9)
        printf("Overweight");

    else if(weight > 30)
        printf("Obese");

    else
        printf("Give Proper weight");
return 0;
}