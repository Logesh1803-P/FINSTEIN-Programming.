#include <stdio.h>
#include <string.h>

int main(){
    int i,j,small_Num,temp,k;
    int a[]= {2,1,3,7,5};
    int len = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < len - 1; i++){
    k = i;
    small_Num = a[i];

         for( j = i+1; j < len; j++){

            if( small_Num > a[j]){
                small_Num = a[j];
                k = j;
            }
         }
         if (k != i){
            temp = a[i];
            a[i] = small_Num;
            a[k] = temp;
         }
           

    }
     printf("%d \n", a[1]);
}