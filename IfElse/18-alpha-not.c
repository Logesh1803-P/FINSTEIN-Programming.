#include <stdio.h>
int main(){

    char alphabet;
    printf("Enter any input:");
    scanf("%c", &alphabet);

    if(alphabet >= 'a' && alphabet <= 'z')
        printf("alphabet");

    else 
        printf("Not a alphabet");
}