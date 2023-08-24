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
    
    int count = 1;
    for(int i = 1; count < row; i = i+2){
    space(s);
    
        for (int j = 1; j <= i; j++){

            printf("*");
           
            
        }
        printf("\n");
         count++;
        s--;
    }
}