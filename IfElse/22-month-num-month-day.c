#include<stdio.h>
int main(){

    int month_num;
    printf("Enter month Number:");
    scanf("%d", &month_num);

    if (month_num == 1 || month_num == 3 || month_num == 5 || month_num == 7 || month_num == 8 || month_num == 10 || month_num == 12)
        printf("31 day's in month %d",month_num);

    else if ( month_num == 4 || month_num == 6 || month_num == 9 || month_num == 11)
        printf("30 day's in month %d", month_num);

    else if (month_num == 2)
         
        printf("28 days in month %d", month_num);
}