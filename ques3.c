#include<stdio.h>

void sign(int a){
    if(a ==0){
        printf("Zero");
    }
    else if(a>0){
        printf("positive");
    }
    else{

        printf("Negetive");
    }
    
}

void main(){
    sign(-5);
    
}