#include <stdio.h>
#include<string.h>
int main(){
    
    int a[1000];
    printf("Enter the number of elements: ");
    int n;
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int k =0;
    int found = 1;
    int i;
    int len = n;

    for( i = len-1 ; i >= len / 2; i--){

        if (a[i] != a[k]){
            found = 0;
            break;
        }
        k++;
    }
    if(found == 1)
       printf("palindrome");
    else
        printf("not\n");
}