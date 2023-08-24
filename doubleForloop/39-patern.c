#include <stdio.h>
void space(int S){
    for(int k = 1; k < S; k++){
        printf(" ");
    }
}

int main(){
    int row;
    printf("Input number of rows:");
    scanf("%d", &row);
    int s= row;
    

    for(int i = 1; i <= row; i++){
    space(s);
    
        for (int j = 1; j <= i; j++){
            printf("* ");
            
        }
        printf("\n");
        s--;
    }
}