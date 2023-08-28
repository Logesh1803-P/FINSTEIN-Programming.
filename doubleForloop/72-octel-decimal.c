#include <stdio.h>

int main(){
    int n,d;
    int sum;
    printf("Input a decimal number:");
    scanf("%d",&n);
    int o = 2;
    for(int i = 0; i < 1; i++){
        d = n / 8;
        o = o * d;
        sum = n + o;
        
    }
    printf("%d ",sum);
}