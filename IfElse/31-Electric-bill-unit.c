#include<stdio.h>

int main(){

    float unit,bill,surcharge;
    printf("Enter Unit :");
    scanf("%f", &unit);

    if (unit <= 50){
       bill = unit * 0.5;
       printf(" your Electric bill is %.2f",bill);
    }
    else if (unit > 50 && unit <= 150){
        bill = unit * 0.75;
        printf(" your Electric bill is %.2f",bill);
    }
    else if(unit > 150 && unit <= 250){
        bill = unit * 1.20;
        printf(" your Electric bill is %.2f",bill);
    }
    else if(unit > 250){
        
        bill = unit * 1.50;
        surcharge = ((bill * 20) / 100 )+ bill;
        printf(" your Electric bill is %.2f",surcharge);
    }
    else 
        printf("Enter Valid unit");
return 0;
}