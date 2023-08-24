#include <stdio.h>

int main(){
    char alphabet;
    printf("Enter any alphabet:");
    scanf("%c", &alphabet);
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' ||  alphabet == 'u' )
    // alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' ||  alphabet == 'U')
        printf("Vowel");

    else if (alphabet >= 'a' && alphabet <= 'z' || alphabet >= 'A' && alphabet <= 'Z')
        printf("Consonant");

    else
        printf("PLEASE ENTER ALPHABET");
}