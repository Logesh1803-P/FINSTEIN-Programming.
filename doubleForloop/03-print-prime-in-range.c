#include<stdio.h>

int main(){
    int range1,range2,r,i;
    printf("Enter the range1:");
    scanf("%d",&range1);
    printf("Enter the range2");
    scanf("%d",&range2);
    int count = 0;
    for(r = range1; r < range2; r++){
    int found = 0;

            if(r == 0 || r == 1){
                found =1;
            }

            for(i = 2; i < r; i++){
            if(r % i == 0){
                found = 1;
                
                break;
            }
        }
        if(found == 0){
            count++;
            printf(" %d ",r);
        }
            

        }
        printf("total number  of prime :%d \n",count);
}