#include <stdio.h>

void non_prime(int a){
    for(int i = 0; i <= a; i++){

        if(i == 0 || i == 1){
            printf("%d ",i);
        }
        else
             for(int j = 2; j < i;j++){
                if(i % j == 0){
                printf("%d ",i);
                break;
                }
        }

        }    
    }

int main(){
    non_prime(24);
}