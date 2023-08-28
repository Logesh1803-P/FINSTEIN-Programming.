#include <stdio.h>

int main(){

    int n;
    printf("Enter any number upto tour length: ");
    scanf("%d",&n);
    // printf("%d",n);
    int product = 1;
    int mod;
    for(int i = 1; n > 0; i++){
       
            mod = n % 10;
            n = n/10;

            product = product * mod;
    }
    printf("the product is:%d",product);

}