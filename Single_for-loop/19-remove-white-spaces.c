#include<stdio.h>
#include<string.h>

int main(){
    char s[] = "lo ge sh";
    char a[100];
    int i,k=0;

     for(i = 0; i < strlen(s); i++){
        if (s[i] != ' '){
            a[k]  = s[i];
            k++;
        }
     }
     puts(s);
     puts(a);
}

