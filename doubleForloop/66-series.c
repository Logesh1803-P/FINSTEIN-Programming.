#include <stdio.h>

int main(){
    int n;
    printf("Input number of rows:");
    scanf("%d",&n);

    for (int i = 1; i <= n;i++){
        int count = 1;
        for(int j = i; count <= n; j++){
            if (j % 2 == 0){
                printf("White");
                count++;
                if(count <= n){
                    printf("-");
                }
            }   
            else {
               printf("block");
               count++;
               if(count <= n){
                    printf("-");
                }
            }
        }
        printf("\n");
    }
}