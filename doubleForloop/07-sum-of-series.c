#include <stdio.h>
#include <math.h>
int pow(n1,n2){

    for(int k = 1; k < n2; k++){
          n1 = n1 * n1;
        
    }
    return n1;
}

int sum_of_series(n){
    float sum = 0;
    int constant = 1;
    for(int i = 1; i <= n; i++){
        float power = 1 / pow(i,i);
        printf("%d / %d ^ %d = %f",constant,i,i,power);
        sum = sum + power;
    }
    printf("%.2f ", sum);
}

int main(){
    int x = 5;
    sum_of_series(x); 
    
}