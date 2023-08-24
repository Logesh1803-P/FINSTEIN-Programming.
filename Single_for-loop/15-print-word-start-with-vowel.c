#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char word;
    char chr[][20] = {"loki","hemarth","ayyanar","udaey"};


    for (i = 0; i < strlen(chr[20]); i++){

        word = chr[i][0];
        if (word == 'a'|| word == 'e' || word== 'i'|| word== 'o'|| word == 'u'){
            
            printf("%s ", chr[i]);
            // printf(" ");
        } 
    }
}