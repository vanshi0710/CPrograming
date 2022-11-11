#include<stdio.h>

void isTriangle(int a1, int a2 , int a3){
    if(a1 + a2 + a3 ==180  && a1>0 && a2>0 && a3>0){
        printf("it is a Triangle");
    }
    else{
        printf("Not a Triangle");

    }
}
void main(){
    isTriangle(45,40,90);
}