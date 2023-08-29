#include<stdio.h>
#include<string.h>

int main(){
    int n,r,i;
    int a[100];
    printf("Input a decimal number:");
    scanf("%d",&n);

    for( i = 0; n > 0; i++){
        r = n % 8;
        n = n / 8;
        // printf("%d ",r);
        a[i] = r;
    }
    // printf("%d ",r);
    // a[i] = r;
    printf("\n");
    printf("The octal number is:");
    for(int j = i-1; j >= 0; j--){
        printf("%d",a[j]);
    }
    
}