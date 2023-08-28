#include <stdio.h>
void downspace(int C){

    for(int l = C; l > 0; l--){
        printf(" ");
    }
}

int main(){
    int row,i,j,count1,count2;
    printf("Input number of rows:");
    scanf("%d", &row);
    int s= 0;
    int count = 1;
    int a = row;
    

    for(i = row + (row -1); count <= row; i= i - 2){
    downspace(s);
    
    
        for (j = 1; j <= a; j++){
            printf("%d",j);
              
        }
        a--;
        
        for (int l = a; l >= 1; l--){
            printf("%d",l);  
        }

        printf("\n");
        s++;
        count++;
    }
}