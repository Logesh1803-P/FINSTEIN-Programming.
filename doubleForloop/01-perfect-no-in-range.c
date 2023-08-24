#include <stdio.h>

int main(){
    int range1,range2,i,j;
    printf("Enter the range1 :");
    scanf("%d",&range1);
    printf("Enter the range2:");
    scanf("%d",&range2);

    for (i = range1; i < range2;i++){
        int sum =0;
        for(j = 1; j < i; j++){
            if(i % j == 0){
                sum = sum + j;
            }
        }
        if(i == sum)
            printf("%d ",i);
    }
}