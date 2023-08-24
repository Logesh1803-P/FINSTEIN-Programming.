#include<stdio.h>
int main(){
    int person_credit_score;
    printf("Enter your Credit_Score:");
    scanf("%d", &person_credit_score);

    if(person_credit_score < 600)
        printf("Poor Credit");

    else if (person_credit_score >= 600 && person_credit_score <= 699)
        printf("Fair Credit");

    else if (person_credit_score >= 700 && person_credit_score <= 799)
        printf("Good Credit");

    else if (person_credit_score >= 800)
        printf("Excellent Credit");
    return 0;
}