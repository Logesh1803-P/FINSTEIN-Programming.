#include<stdio.h>
#include <math.h>
int main(){
    float a;
    float b;
    float c;
    float d;
    float r1,r2;
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f", &b);
    printf("Enter c:");
    scanf("%f", &c);
    d = (b*b)-(4*a*c);
    if (d >0 ){
      r1 = -b+(sqrt(d))/(2*a);
      r2 = -b-(sqrt(d))/(2*a);
      printf("r1 = %.2f \n r2 = %.2f ",r1,r2);
    }
    else if (d == 0)
    {
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        printf("r1 = %.2f \n r2 = %.2f ",r1,r2);
    }
    else
        printf("root are imaginary");
    

}