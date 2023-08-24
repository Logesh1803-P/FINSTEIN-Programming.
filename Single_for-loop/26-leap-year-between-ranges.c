#include <stdio.h>

int main(){

    int range1,i;
    int range2;
    printf("Enter start year:");
    scanf("%d",& range1);
    printf("Enter end year:");
    scanf("%d",& range2);

    for(i = range1; i < range2; i++){
        if(i % 400 == 0)
             printf(" %d",i);
        else if (i % 100 == 0)
             continue;
        else if(i % 4 == 0){
            printf(" %d",i);
        }
        
    }

}