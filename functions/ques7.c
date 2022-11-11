#include<stdio.h>

#include <ctype.h>

void main(){
    char a = '+';
    if(isalpha(a)){
        printf("Alphabet");
    }
    else{
        printf("not a alphabet");
    }
}