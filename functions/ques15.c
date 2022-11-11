#include<stdio.h>

void isTriangle(int s1, int s2 , int s3){
    if(s1 + s2 >s3 && s1 +s3 > s2 && s2 + s3 >s1){
        printf("it is a Triangle");
    }
    else{
        printf("Not a Triangle");

    }
}
void main(){
    isTriangle(45,40,90);
}