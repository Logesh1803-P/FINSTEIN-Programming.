#include <stdio.h>

int main(){
    int start,total_count,difference;
    printf("Input the starting number of the G.P. series:");
    scanf("%d",&start);
    printf("Input the number of items for the G.P. series:");
    scanf("%d",&total_count);
    printf("Input the common difference of G.P. series:");
    scanf("%d",&difference);
    int count = 0;
    int sum = 0;

    for (int i = start; total_count > count; i = i * difference){
        printf("%d ",i);
        sum = sum + i;
        count++;
        if(total_count != count){
            printf("+ ");
        }
    }
    printf(" = %d\n",sum);


}