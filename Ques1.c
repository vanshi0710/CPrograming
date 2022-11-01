#include<stdio.h>

int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}

void main(){
    int m = max(6,7);
    printf("%d",m);
}