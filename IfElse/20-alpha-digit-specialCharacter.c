#include<stdio.h>
int main(){
    char variable;
    printf("Enter Input:");
    scanf("%c",&variable);

    if (variable >= 'a'&& variable <= 'z'|| variable >= 'A' && variable <= 'Z')
        printf("alphabet");

    else if(variable >= '1' && (int)variable <= '9')
        printf("Digit");

    else 
        printf("Special_charector");
}