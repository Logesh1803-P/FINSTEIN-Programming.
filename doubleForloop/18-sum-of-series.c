#include <stdio.h>
int pows(int b,int r){
    int p = 1;
    for(int z = 1; z <= r; z++){
        p = p * b;

    }
    return p;
}
int main(){

    int n ;
    printf("Input number of terms:");
    scanf("%d",&n);

    int sum = 0;
    for( int i =1; i <= n; i++){
        int t =(pows(10,i))-1;
        printf("%d ",t);
        sum = sum + t;
    }
    printf("\n");
    printf("The sum of the series = %d",sum);
} 