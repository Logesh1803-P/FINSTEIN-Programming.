#include <stdio.h>
int main(){
    int number1;
    int number2;
    printf("Enter the number1:\n");
    scanf("%d",&number1);

    printf("Enter the number2:\n");
    scanf("%d", &number2);
    int gcd;
    int i;

    //condition for GCD 
    for(i = 1;number1 > i && number2 > i; i++){

        if(number1 % i == 0 && number2 % i == 0){
               gcd = i;
        }
    }
    printf("the gcd of %d and %d is %d ",number1,number2,gcd);

}