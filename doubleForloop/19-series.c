#include <stdio.h>
int pows(int b,int r){
    int p = 1;
    for(int z = 1; z <= r; z++){
        p = p * b;

    }
    return p;
}
int fact(int v){
    int factorial = 1;
    for(int m = v; m >= 1; m--){
        factorial = factorial * m;

    }
    return factorial;
}

int main(){
    int x,n;
    printf("Input the value of x");
    scanf("%d",&x);
    printf("Input the value of n");
    scanf("%d",&n);
    float sum = 0.0;
    float temp;
    for(int i = 0; i <= n; i++){
        if(i == 0){
            temp = 1.0;
            printf("%f ",temp);
        }
        else {
            temp = (float)pows(x,i) / fact(i);
            printf("%f ",temp);
        }
        sum = sum + temp;       
        }
    printf("\n");
    printf("The sum is :%.5f",sum);
}