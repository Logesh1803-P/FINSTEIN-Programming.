#include <stdio.h>

int main(){
    int row;
    printf("Input number of rows:");
    scanf("%d", &row);
    int k = 1;

    for(int i = 1; i <= row; i++){

        for (int j = 1; j <= i; j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}