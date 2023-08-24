#include<stdio.h>

int main(){
    char chr;
    printf("Enter your Charector:");
    scanf("%c", &chr);

    if(chr >= 'a' && chr <= 'z')
        printf("LowerCase");

    else if(chr >= 'A' && chr <= 'Z')
        printf("UpperCase");

    else
        printf("Enter Alphabet!"); 
}