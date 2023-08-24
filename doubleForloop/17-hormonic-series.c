#include <stdio.h>

int main(){
    int n;
    printf("Input number of terms:");
    
    scanf("%d",&n);
    float sum = 0.0;
    float k = 1.0;

    for(int i = 1; i <= n; i++){
        printf("%.f / %d",k,i);
        // float div = k / i; 
        sum = sum + k/i;

        if(i != n){
            printf(" + ");
        }
    }
    printf("\n");
    printf("The sum of the series upto 5 terms:%.5f",sum);
}