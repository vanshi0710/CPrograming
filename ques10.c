#include<stdio.h>

#include <ctype.h>

void charCase(char a){
    if(isalpha(a)==1){
        printf("UpperCase\n");
    }else if(isalpha(a)==2){
        printf("lowerCAse\n");
    }
    else{
        printf("not a alphabet\n");
    }
}

void main(){
    charCase('=');
    charCase('P');
    charCase('u');
    
}