#include<stdio.h>

int main(){
     int n;
    
    printf("Input the value of x: ");
    scanf("%d", &n);
    int temp = 0;
    int sum = 0;
    int k = 1;

    for(int i = 1; i <=n; i++){
        sum = (sum * 10) + k;
        temp = temp + sum;
        printf("%d ",sum);

        if(i != n){
            printf("+ ");

        }
    }
    printf("\n");
    printf("The sum of the series is:%d",temp);
}