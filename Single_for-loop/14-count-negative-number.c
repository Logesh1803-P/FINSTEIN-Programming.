#include <stdio.h>

int main(){

    int i;
    int a[]={3,-4,6,-5,-4,-6};
    int count = 0;
    for( i = 0; i < sizeof(a)/sizeof(a[0]); i++){
        if (a[i] < 0){

            count++;
        }
    }
    printf("Negative Numbers are :%d\n",count);
}