#include <stdio.h>

int main(){
    int row;
    printf("Input number of rows:");
    scanf("%d", &row);

    for(int i = 1; i <= row; i++){

        for (int j = i; j <= row; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}