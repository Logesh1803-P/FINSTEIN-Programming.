#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d",&age);
    if (age < 18)
      printf("%d -> Child ",age);
    else if(age >= 18 && age <= 65)
      printf("%d -> Adult", age);
    else if(age > 65)
      printf("%d -> Senior",age);
    else 
      printf("Enter proper Age !");
}