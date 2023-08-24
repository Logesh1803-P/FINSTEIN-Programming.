#include <stdio.h>
int main(){
    int n = 5;
    int sum = 0;
    for (int i = 1; i <= n; i++){
        int add_each_row = 0;
        for(int j = 1; j <= i; j++){
            printf("%d ",j);
            sum = sum + j;
            add_each_row = add_each_row + j;
            if(j != i){
                printf("+ ");
            }
        }
        printf("= %d",add_each_row);
        add_each_row = 0;
        printf("\n");
    }
    printf("sum is %d",sum);
}