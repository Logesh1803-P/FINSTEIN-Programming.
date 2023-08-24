#include <stdio.h>
#include <string.h>

int main(){

    char s[100];
    printf("Enter your string:");
    fgets (s,sizeof(s),stdin);
    // puts(s);

    int i;
    int count = 0;
    int fount = 0;

    for(i =0 ; s[i] != '\0'; i++){

        if(s[i] != ' '  ){
            if(fount == 0){
                fount = 1;
                count++; 
            }
              
        }else
             fount = 0; 
            
    }
    printf(" Number of words in strings is: %d\n",count);
}
// || s[i] == '\t' || s[i] == '\n'