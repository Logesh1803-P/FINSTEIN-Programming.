#include<stdio.h>

int main(){
    int b,e;
    printf("Input the base:");
    scanf("%d",&b);
    printf("Input the exponent:");
    scanf("%d",&e);
    int f = 1;
    for (int i = 1; i <= e;i++){
        f = f* b;
    }
    printf("%d",f);
}