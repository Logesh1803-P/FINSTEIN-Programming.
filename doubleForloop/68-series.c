#include <stdio.h>

int main(){
    int n = 15;
    int b = 9;
    int l = 0,r = 0,r1 = 0,r2=0;
    int count = 0;

    for (int i = 1;count <= n; i++){
        if (i % b ==0){
            l++;
            r2 = 0;
            printf("%d,%d",l,r1);
            count++;
        }
        else if (i > b){
            r2++;
            printf("%d,%d",l,r2);
        }
        else{
            r++;
            printf("%d,%d",l,r);
            count++;
        }
    }
}