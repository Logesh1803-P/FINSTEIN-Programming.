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
    int p = 0;

    for(i = 65; count <= row; i= i + 2){
    space(s);
    
        for (j = 65; j <= i - p; j++){
            printf("%c",j);
            
        }
        j = j - 2;
        for (int l = j; l >= 65; l--){
            printf("%c",l);
            
        }

        printf("\n");
        s--;
        count++;
        p++;
    }
}