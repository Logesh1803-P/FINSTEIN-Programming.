#include<stdio.h>
int main(){
    int mark;
    printf("Please enter your mark:");
    scanf("%d", &mark);
    if (mark > 60)
        printf("%d is pass\n",mark);
    else
        printf("%d is fail\n",mark);
    return 0;
}