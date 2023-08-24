#include <stdio.h>

int main(){

    int a[100] = {2,3,5,5,6,4,6};
    int b[100];
    int i,j;
    int k = 0;
    int len = sizeof(a) / sizeof(a[0]);

    for (i = 0; i < len-1; i++){

            for(j = i+1; j < len; j++){

                if (a[i] == a[j]){
                    
                    b[k] = a[j];
                    k++;
                }

            }
                

    }
    int z;
    for (z = 0; z < k-1; z++){
        printf("%d ",b[z]);
    }
}