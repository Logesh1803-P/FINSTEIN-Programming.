#include <stdio.h>
int main(){

    int n = 12345;
    int sum =0;

    for(int i = 1; n > 0;i++){

        int r = n % 10;
        n = n / 10;
        sum = sum + r;
    }
    printf("sum is %d",sum);
}