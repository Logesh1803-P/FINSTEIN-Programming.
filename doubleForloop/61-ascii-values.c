#include<stdio.h>

int main(){
    int a,b;
    printf("Input the starting value for ASCII characters:");
    scanf("%d",&a);
    printf("Input the ending value for ASCII characters:");
    scanf("%d",&b);
    printf("The ASCII characters:");

    for (int i = a; i <= b; i++){
        printf("%d --> %c \n",i,i);
    }
}