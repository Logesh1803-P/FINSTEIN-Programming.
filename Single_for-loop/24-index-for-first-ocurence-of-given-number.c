#include <stdio.h>
int check(int temp[20],int e[10]){
    int z,x,found;
    int x_len = sizeof(temp) / sizeof(temp[0]);
    int Z_len = sizeof(e) / sizeof(e[0]);
    for(z = 0; z < Z_len; z++ ){
        for (x = 0 ; x < x_len;x++){
            if(e[z] = temp[x]) {
              found = 1;
        }

        }
    }
return found;
}

int main() {
    int a[10] = {1, 2, 2, 2, 3, 4, 3};
    int b[20];

    int i, j, k=0;
    int len = sizeof(a) / sizeof(a[0]);
    int found = 0;

    for (i = 0; i < len; i++){

        for (j = i + 1; j < len; j++){
            found = check(b[20],a[10]);
            if(found == 0){
                 if(a[i] == a[j]){
                 b[k] = a[i];
                 printf("%d ",j);
                 k++;
                 break;
            }

            }
           
        }
    }
    
    
}