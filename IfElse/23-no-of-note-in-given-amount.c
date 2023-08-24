#include<stdio.h>

int main(){
    int amount;
    float number_of_note;
    printf("Enter Your amount:");
    scanf("%d", &amount);
    const int one_note_amount = 5;

    if (amount > 5){
        number_of_note = amount / one_note_amount;
        printf(" you can buy %.f notes", number_of_note);   
    }
    else 
        printf("Not enough Money");
}