#include<stdio.h>

int main(){
    int n,i;
    int factorial =1;
    printf("Enter number:");
    scanf("%d",&n);

    for(i = n; i >= 1; i--){

        factorial = factorial * i; 
    }
    
printf("%d\n",factorial);
}