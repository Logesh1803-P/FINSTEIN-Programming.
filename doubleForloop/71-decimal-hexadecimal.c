#include<stdio.h>
#include<string.h>

int main(){
    int n,r,k;
    char a[50];
    int i = 0;
    
    
    printf("Input a decimal number:");
    scanf("%d",&n);

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
    // printf("\n");
}