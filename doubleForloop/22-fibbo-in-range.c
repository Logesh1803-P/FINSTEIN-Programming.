#include<stdio.h>

int main(){
    int n;
    int t1,t2;
    printf("enter number:");
    scanf("%d ",&n);
    int sum = 0;
    int temp;
    for(int i = 0; i <= n; i++ ){

        if(i == 0 || i == 1){
            printf("%d ",i);
            
        }
        else {
             t1 = 0;
             t2 = 1;
             sum = t1 + t2;
            printf("%d ",sum);
            temp = t2;
            t1 = temp;
            t2 = sum;
        }

    }
}