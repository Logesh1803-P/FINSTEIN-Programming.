#include <stdio.h>



int prime_list(int n){
    int a[n];
    int k = 0;
    int count = 0;
    int found = 1;
    int store;
    for (int j = 2 ; count < n; j++){
        found = 1;

        for (int i = 2; i <= j - 1; i++ ){
            if (j % i == 0){   
            found = 0;
            break;  
            }          
        }

        if (found == 1){
            // printf("%d ",n);
            a[k] = j;
            count++;
            k++;
        }
    }
    // k--;

    for( int g = 0; g < n-1; g++){
        // printf("%d ",a[g]);
        for (int h = g + 1 ; h < n ; h++){
            if (a[g] + a[h] == n){
                printf("%d = %d + %d\n",n,a[g],a[h]);
            }
        }
    }

}
int main(){
    int number;
    printf("Input a positive integer:");
    scanf("%d",&number);
    prime_list(number);

}

// int main(){
//     int x = 20;
//     int b[] = prime_list(x);
//     int len =  sizeof(b) / sizeof(b[0]) ;
//     for (int j = 0; j > len; j ++ ){
//         printf("%d ",j);
//     }
// }