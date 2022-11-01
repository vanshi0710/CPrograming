#include<stdio.h>

int max(int a, int b , int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    return c;
}

void main(){
    printf("%d",max(34,54,65));
}