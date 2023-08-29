#include <stdio.h>
#include <string.h>

int pows(int b, int e) {
    int p = 1;
    if (e == 0) {
        return 1;
    }
    for (int i = 1; i <= e; i++) {
        p = p * b;
    }
    return p;
}

int main() {
    int n, r, i, dec, pow = 0;
    int a[100];
    printf("Input an octal number:");
    scanf("%d", &n);
    int sum = 0;
    int base = 8;

    for (i = 0; n > 0; i++) {
        r = n % 10;
        n = n / 10;

        dec = r * pows(base, pow);
        pow++;
        sum = sum + dec;
    }

    printf("The decimal num is %d\n", sum);
    int n = sum,r,k;
    char a[50];
    int i = 0;
    
    
    

    for( k = 0; n > 0; k++){
        r = n % 16;
        n = n / 16;
        if(r == 10){
           printf("A");
           a[i] = 'A';
           i++;
        }
            
        else if(r == 11){
                printf("B");
                a[i] = 'B';
                i++;
        }
            
        else if(r == 12){
            printf("C");
            a[i]= 'C';
            i++;

        }
            
        else if(r == 13){
            printf("D");
            a[i]= 'D';
            i++;

        }
            
        else if(r == 14){
             printf("E");
             a[i] = 'E';
             i++;

        }
           
        else if(r == 15){
            printf("F");
            a[i]= 'F';
            i++;

        }
            
        else{
            printf("%d ",r);
            a[i] = r + '0';
            i++; 

        }
               
}
printf("\n");
 for(int z = i-1; z >= 0; z--){
        printf("%c",a[z]);
    }
}