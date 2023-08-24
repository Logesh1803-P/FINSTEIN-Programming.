#include<stdio.h>
int main(){
    int number,i,j;
    printf("Enter prime NUM:");
    scanf("%d",&number);
    
    for( i = number; i > 1; i--){
    int found = 0;
        for(j = 2; j < i; j++){
            if(i % j == 0){
                found = 1;
                break;
            }
        }
        if(found == 0){
        printf("%d ",i);
        break;
        }

    }
}