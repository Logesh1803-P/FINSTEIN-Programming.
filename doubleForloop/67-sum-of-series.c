#include<stdio.h>

int main(){
    int n,m;
    printf("Input the last integer between 1 to 98 without fraction you want to add");
    scanf("%d",&n);
    // float sum = 0;
    float sums = 0;

    int i = 1;
    float j = 0.2;

    int x = 1;
    int y = 2;

    
    for(i = 1; i <= n; i++){
        printf("%d.%d ",x,y);
        if(i < n){
            printf("+");
        }
        sums = sums + (i + j);
        // sums = sums + (x.y);
        j = j + 0.10;
        i = i + 1.00;
        x++;
        y++;
    }
    printf("The sum of the series :%.3f\n",sums);
}