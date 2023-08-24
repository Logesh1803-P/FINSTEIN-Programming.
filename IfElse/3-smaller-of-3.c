#include<stdio.h>
int main()
{   
    
    int a;
    int b;
    int c;
    printf("Enter number1:");
    scanf("%d", &a);
    printf("Enter number2:");
    scanf("%d", &b);
    printf("Enter number3:");
    scanf("%d", &c);
    if (a < b && a < c)
      printf("%d is smaller", a);
    else if (b < c)
    {
      printf("%d is smaller", b);
    }
    else
      printf("%d is smaller", c);
      return 0;
}