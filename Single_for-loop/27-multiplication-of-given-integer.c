#include <stdio.h>

int main(){
    int number,i,multiple=1;
    printf("Enter what table you want:");
    scanf("%d",&number);

    for(i =1 ; i <= 10; i++){
        multiple = i * number;

        printf("%d * %d = %d\n",i,number,multiple);

    }
}