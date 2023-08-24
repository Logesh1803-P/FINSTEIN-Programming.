#include <stdio.h>

void sum_of_series(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        
        int mul = i * i;
        printf("%d * %d = %d \n",i,i,mul);
        sum = sum + mul;
    }
    printf("sum is %d",sum);
}

int main(){
    int x = 5;
    sum_of_series(x);
}