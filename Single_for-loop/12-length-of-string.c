#include <stdio.h>
int main(){
    char c[100];
    printf("Enter any words:");
    scanf("%s", c);
    int i;
    int count = 0;
    for(i = 0; c[i] != '\0'; i++){
        count++;
    }
    printf("string count is : %d\n",count);
}