#include <stdio.h>

int main(){

    int n;
    printf("Enter any number upto tour length: ");
    scanf("%d",&n);
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0;
   
    int mod;
    for(int i = 1; n > 0; i++){
       
            mod = n % 10;
            

            if(mod == 0){
                c1++;
            }
            else if(mod == 1){
                c2++;
            }
             else if(mod == 2){
                c3++;
            }
             else if(mod == 3){
                c4++;
            }
             else if(mod == 4){
                c5++;
            }
             else if(mod == 5){
                c6++;
            }
             else if(mod == 6){
                c7++;
            }
             else if(mod == 7){
                c8++;
            }
             else if(mod == 8){
                c9++;
            }
             else if(mod == 9){
                c10++;
            }
            n = n/10;
    }
    printf("The frequency of 0 : %d\n",c1);
    printf("The frequency of 1 : %d\n",c2);
    printf("The frequency of 2 : %d\n",c3);
    printf("The frequency of 3 : %d\n",c4);
    printf("The frequency of 4 : %d\n",c5);
    printf("The frequency of 5 : %d\n",c6);
    printf("The frequency of 6 : %d\n",c7);
    printf("The frequency of 7 : %d\n",c8);
    printf("The frequency of 8 : %d\n",c9);
    printf("The frequency of 9 : %d\n",c10);
   

}