#include <stdio.h>

int main(){
    int row;
    printf("Input number of rows:");
    scanf("%d", &row);

    for(int i = 1; i <= row; i++){

        for (int j = i; j >= 1; j--){
            if(j % 2 == 0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
}