#include <stdio.h>

int main(){
    int n;
    printf("Input number of terms:");
    
    scanf("%d",&n);
    printf("The odd numbers are:");

    int count = 0;
    int sum = 0;

    for(int i = 2;count < n; i=i+2){
        sum = sum + i;
        count++;
        printf("%d ",i);
    }
    printf("\n");
    printf("the sum is %d\n",sum);
}
