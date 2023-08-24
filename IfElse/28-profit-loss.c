#include<stdio.h>

int main()
{
    float c_p;
    float s_p;
    float amt;
    printf("Enter the cost prize:");
    scanf("%f", & c_p);
    printf("Enter the selling prize:");
    scanf("%f", &s_p);

    if (s_p > c_p){
        amt = s_p - c_p;
        printf("Profit  %.f",amt);
    }
    else if (c_p > s_p)
    {
        amt = c_p - s_p;
         printf("Loss  %.f",amt);
    }else
        printf("No profi and No Loss");
    
        

return 0;   
}