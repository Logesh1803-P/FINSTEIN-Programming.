#include<stdio.h>

int main(){
    int n;
    printf("Input number or rows:");
    scanf("%d",&n);
    int limit = n-1;

    for( int i = 0; i < n;i++){

        for(int j = i; j >= 0; j--){
            printf("%d ",j);
        }
        for(int k = 1; k <= limit; k++){
            printf("%d ",k);
            
        }
        limit--;
        printf("\n");
    }
}