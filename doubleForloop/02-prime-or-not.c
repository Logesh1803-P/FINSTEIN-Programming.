#include<stdio.h>
int main(){
    int number,i;
    printf("Enter prime NUM:");
    scanf("%d",&number);
    int found = 0;
    if(number == 0 || number == 1){
        printf("%d is notPrime",number);
    }
    else{

        for(i = 2; i < number; i++){
        if(number % i == 0){
            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("%d is prime",number);
    else
        printf("%d is notPrime",number);

    }

    
}