#include <stdio.h>

int main(){

    float side1;
    float side2;
    float side3;
   
    printf("Enter sides1:");
    scanf("%f",&side1);
    printf("Enter sides2:");
    scanf("%f", &side2);
    printf("Enter sides3:");
    scanf("%f", &side3);
     
    
    if (side1 == side2 && side1 == side3)
        printf("triangle is equilateral");
    else if(side1 == side2 || side2 == side3 || side3 == side1)
        printf("triangle is isosceles");
    else
        printf("triangle is scalence");
}