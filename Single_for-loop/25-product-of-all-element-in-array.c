#include <stdio.h>

int main(){
    int a[]= {2,4,2};
    int i;
    int p = 1;
    int len = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < len; i++){
        p = p * a[i];

    }
    printf("product of array is :%d \n",p);
}