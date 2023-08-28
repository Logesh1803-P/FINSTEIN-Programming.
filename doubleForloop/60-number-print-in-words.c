#include <stdio.h>

int main(){

    int n;
    printf("Enter any number upto tour length: ");
    scanf("%d",&n);
    // int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0;
   
    int mod;
    for(int i = 1; n > 0; i++){
       
            mod = n % 10;
            

            if(mod == 0){
                printf("Zero ");
            }
            else if(mod == 1){
                printf("one ");
            }
             else if(mod == 2){
                printf("two ");
            }
             else if(mod == 3){
                printf("three ");
            }
             else if(mod == 4){
                printf("four ");
            }
             else if(mod == 5){
                printf("five ");
            }
             else if(mod == 6){
                printf("six ");
                
            }
             else if(mod == 7){
                printf("seven ");
            }
             else if(mod == 8){
                printf("eight ");
                
            }
             else if(mod == 9){
                printf("Nine ");
                
            }
            n = n/10;
    }
    // printf("The frequency of 0 : %d\n",c1);
    // printf("The frequency of 1 : %d\n",c2);
    // printf("The frequency of 2 : %d\n",c3);
    // printf("The frequency of 3 : %d\n",c4);
    // printf("The frequency of 4 : %d\n",c5);
    // printf("The frequency of 5 : %d\n",c6);
    // printf("The frequency of 6 : %d\n",c7);
    // printf("The frequency of 7 : %d\n",c8);
    // printf("The frequency of 8 : %d\n",c9);
    // printf("The frequency of 9 : %d\n",c10);
   

}