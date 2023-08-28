#include <stdio.h>

int main(){
    
    // int n;
    // printf("range:");
    // scanf("%d",&n);
    // printf("Enter any number upto tour length:");
    // int a[n];
    // for (int i = 0;i < n; i++){
    //     scanf("%d",&a[i]);
    // }

    // printf("%d %d",a[0],a[n-1]);
    // // printf("%d",a[n-1]);
    int n;
    printf("Enter any number upto tour length:");
    scanf("%d",&n);
    int last = n;
    for(int i = 1; n > 10; i++){
       
            n = n / 10;
    }
    printf("The first digit  is: %d\n",n);
    

            int m = last % 10;
            // printf("%d\n",m);
            printf("The last digit  is: %d\n",m);
        


}