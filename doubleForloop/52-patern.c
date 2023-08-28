#include <stdio.h>

int main(){
    int row;
    printf("Input number of rows:");
    scanf("%d", &row);

    for(int i = row; i >= 1; i--){

        for (int j = i; j >= 1; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}