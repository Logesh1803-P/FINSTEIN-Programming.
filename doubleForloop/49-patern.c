#include <stdio.h>
void space(int S){
    for(int k = 1; k < S; k++){
        printf(" ");
    }
}

int main(){
    int row,i,j;
    printf("Input number of rows:");
    scanf("%d", &row);
    int s= row;
    int count = 1;
    int z = 1;

    for(i = 1; count <= row; i= i + 2){
    space(s);
    
        for (j = z; j <= i; j++){
            printf("%d",j);
            
        }
        j = j - 2;
        for (int l = j; l >= z; l--){
            printf("%d",l);
            
        }

        printf("\n");
        s--;
        count++;
        z++;
    }
}