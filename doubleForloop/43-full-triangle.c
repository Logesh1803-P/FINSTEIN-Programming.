#include <stdio.h>
void upspace(int S){
    for(int k = 1; k < S; k++){
        printf(" ");
    }
}
void downspace(int C,int inc){

    for(int l = C + inc; l > C; l--){
        printf(" ");
    }
}

int main(){
    int row,i;
    printf("Input number of rows:");
    scanf("%d", &row);
    int s= row;
    int count = 1;
    

    for(i = 1; count <= row; i =i+2){
    upspace(s);
    
        for (int j = 1; j <= i; j++){
            printf("*");
            
        }
        printf("\n");
        s--;
        count++;
    }
    int temp = i-(2+2);
    count = 1;
    s = 5;
    int f= 1;
    for(int m = temp; count < row; m = m - 2){
    downspace(s,f);
    
        for (int n = 1; n <= m; n++){
            printf("*");
            
        }
        printf("\n");
        // s++;
        count++;
        f++;
    }

}