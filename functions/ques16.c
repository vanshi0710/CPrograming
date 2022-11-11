#include<stdio.h>

void triangle( int s1 , int s2 , int s3){
    if( s1 == s2 && s2 ==s3){
        printf("Equilateral\n");
    }
    else if( s1 ==s2 || s1 ==s3 || s2 == s3){
        printf("isosceles\n");
    }
    else{
        printf("Scalene\n");

    }
}


void main(){
    triangle(45,40,90);
    triangle(45,45,90);
    triangle(45,45,45);
}