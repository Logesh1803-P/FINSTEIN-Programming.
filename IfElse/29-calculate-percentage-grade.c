#include <stdio.h>

int main(){

    int physics,chemistry,biology,mathematics,computer;
    float percentage;

    printf("Enter physics mark:");
    scanf("%d", &physics);
    printf("Enter chemistry mark:");
    scanf("%d", &chemistry);
    printf("Enter biology mark:");
    scanf("%d", &biology);
    printf("Enter mathmatics mark:");
    scanf("%d", &mathematics);
    printf("Enter the computer marks:");
    scanf("%d", &computer);
    float sum;
    sum = physics + chemistry + biology + mathematics + computer;
    percentage = sum / 5;

    if(percentage >= 90 && percentage <= 100)
        printf("Grade A %.f%%",percentage);

    else if (percentage >= 80) 
        printf("Grade B %.f%%",percentage);

    else if (percentage >= 70)
        printf("Grade C %.f%%",percentage);

    else if (percentage >= 60)
        printf("Grade D %.f%%",percentage);

    else if (percentage >= 40)
        printf("Grade E %.f%% ",percentage);

    else if (percentage < 40)
        printf("Grade F %.f%%",percentage);

    else
        printf("Give proper Percentage");    
return 0;
}