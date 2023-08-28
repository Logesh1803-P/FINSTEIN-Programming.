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

    for(i = 1; count <= row; i = i + 2){
    space(s);
    int c1 = 1;
    
        for ( j = 1; c1 <= (i / 2)+1; j = j+j){
            printf("%d ",j);
            c1++;    
        }
         
        j = j / 2;
        j = j / 2;
        
        for (int l = j; l >= 1; l = l / 2){
            printf("%d ",l);        
        }
        printf("\n");
        count++;
        s--;
    }
}