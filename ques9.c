#include<stdio.h>

#include <ctype.h>

void main(){
    char a = '1';
    if(isalpha(a)){
        printf("Alphabet");
    }else if(isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special char");
    }
}