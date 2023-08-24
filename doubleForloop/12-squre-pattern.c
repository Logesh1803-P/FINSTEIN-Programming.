#include <stdio.h>

void square_pattern(int n){
    for(int i = 0; i < n; i++){

        for(int j = 0 ; j < n; j++){
            printf("# ");
        }
        printf("\n");
    }
}

int main(){
    int side;
    printf("Enter side Value:");
    scanf("%d",&side);

    square_pattern(side);
}