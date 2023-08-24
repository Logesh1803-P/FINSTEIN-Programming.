#include <stdio.h>

int main(){
    int number1,number2;
    printf("Input 1st number for LCM: ");
    scanf("%d",&number1);
    printf("Input 2nd number for LCM:");
    scanf("%d",&number2);
    int c = 0;
    for(int i = 1;c < 1; i++){

        if(i % number1 == 0 && i % number2 == 0){
            printf("%d ",i);
            c++;
        }
    }

}