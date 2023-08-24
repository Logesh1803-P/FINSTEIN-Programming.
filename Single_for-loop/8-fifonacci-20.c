#include<stdio.h>

int main(){
    int i;
    int Val_1,Val_2,sum,temp;
    Val_1 = 0;
    Val_2 = 1;
    printf("%d %d",Val_1,Val_2);
    for(i = 3; i <= 20; i++){
      
        sum = Val_1 + Val_2;
        printf(" %d", sum);
        temp = Val_2;
        Val_2 = sum;
        Val_1 =temp;
    }

}