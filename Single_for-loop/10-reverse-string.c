#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int i,temp;
    char c[50];
    scanf("%s", c);
    int k = strlen(c)-1;

    for (i = 0; i < strlen(c)/2; i++){
        
        temp = c[i];
        c[i] = c[k];
        c[k] = temp;
        k--;

    }
puts(c);
}