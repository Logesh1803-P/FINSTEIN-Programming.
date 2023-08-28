#include<stdio.h>

int main(){
    int n = 20;
    int b = 9;
    int f = 1;
    int count = 1;

    for(int i = 1;count <= n;i++){
        if(i % b == 0){
            printf("%d ",i + f);
            
            count++;
            i = i + f;
            f++;
        }
        else{
            printf("%d ",i);
            count++;
           
        }
    }
}