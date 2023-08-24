#include<stdio.h>
void cubes(int n){
    int c;
    for(int i = 1; i <= n; i++){
        c = i*i*i;
        printf("Number is : %d and the cube of %d is: %d\n",i,i,c);
        }

    }
int main(){
    int cube;
    printf("Enter cube num upto:");
    scanf("%d ",&cube);
    cubes(cube);
}