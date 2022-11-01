#include<stdio.h>

void isTriangle(int a1, int a2 , int a3){
    if(a1 + a2 + a3 ==180){
        printf("it is a Triangle");
    }
    else{
        printf("Not a Triangle");

    }
}
void main(){
    isTriangle(45,40,90);
}