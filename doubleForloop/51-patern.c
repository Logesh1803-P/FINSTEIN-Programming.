#include <stdio.h>

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
    int t = row;
    int count = 1;
    int f= 0;
    for(int i = 1; count <= row; i ++){
    downspace(s,f);
    
        for (int j = 1; j <= t; j++){
            printf("%d ",j);
            
        }
        printf("\n");
        t--;
        count++;
        f++;
    }

}