#include<stdio.h>
#include<string.h>

int main(){
    float a[]={300.0,323.0};
    float average;
    float sum = 0;
    int i;
    int len = sizeof(a)/sizeof(a[0]);
    for(i = 0; i < len; i++){

        sum = sum + a[i];
    }

    average = sum / len;
    printf(" array average is :%.2f\n",average);
return 0;
}