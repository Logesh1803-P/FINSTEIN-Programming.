#include <stdio.h>

int main(){

    int n;
    printf("Enter any number upto tour length:");
    scanf("%d",&n);
    int last = n;
    int sum= 0;
    for(int i = 1; n > 10; i++){
       
            n = n / 10;
    }
    printf("The first digit  is: %d\n",n);

    int m = last % 10;
    //  printf("%d\n",m);
    printf("The last digit  is: %d\n",m); 
    sum = n + m;  
    printf("The sum of first and last digit  is:%d",sum);  


}