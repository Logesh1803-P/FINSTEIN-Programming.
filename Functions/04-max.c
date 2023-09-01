#include<stdio.h>
int max(int a[], int l){
    int max_val = a[0];
    for(int i = 0; i < l;i++){
        if (max_val < a[i]){
            max_val = a[i];
        }
    }
    return max_val;
}

int main(){
    int n[] = {4,5,8,1};
    int len = sizeof(n) / sizeof(n[0]);

    printf("%d",max(n,len));
}