#include <stdio.h>
// #include <math.h>
int pows(n1,n2){
    int e = n1 ;
    for(int k = 1; k < n2; k++){
          e = e * n1;   
    }
    return e;
}

void sum_of_series(n){
    float sum = 0.0;
    float constant = 1.0;
    for(int i = 1; i <= n; i++){
        float power = constant / pows(i,i);
        printf("%.f / %d ^ %d = %.7f\n",constant,i,i,power);
        sum = sum + power;
    }
    printf("%.5f ", sum);
}

int main(){
    int x = 5;
    sum_of_series(x); 
    
}