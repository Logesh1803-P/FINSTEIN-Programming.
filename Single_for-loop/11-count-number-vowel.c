#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    int i;
    printf("Enter any string:");
    scanf("%s", string);
    int count = 0;
    for( i = 0; i < strlen(string); i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U'){
            count++;
        }
    }
    printf("%d\n",count);
}