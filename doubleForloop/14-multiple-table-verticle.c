#include<stdio.h>

int main(){
    int n;
    printf("Enter Number upto :");
    scanf("%d",&n);
    for(int i = 1;i <= 10; i++){
        for(int j = 1; j <= n; j++){
            int m = j * i;
            printf("%d * %d = %d  ",i,j,m);

        }
        printf("\n");
    }
}