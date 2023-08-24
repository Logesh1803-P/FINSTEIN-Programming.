#include<stdio.h>

int pows(int b, int r) {
    int p = 1;
    for (int z = 1; z <= r; z++) {
        p = p * b;
    }
    return p;
}

int main(){
    int x, n;
    
    printf("Input the value of x: ");
    scanf("%d", &x);
    
    printf("Input number of terms: ");
    scanf("%d", &n);
    int t;
    int sum = 0;
    int k =1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            t = pows(x,k);
            printf("%d\n",t);
            k = k+2;
        }       
        else{
            t = -pows(x,k);
            printf("%d\n",t);
            k = k+2;        
        }
        sum = sum + t;
    }

printf("\n");
printf("The sum of the series upto 5 term is:%d", sum);

}