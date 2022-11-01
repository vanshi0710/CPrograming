#include<stdio.h>
#include<math.h>

void roots(int a, int b, int c){
    int d = pow((float)b,2) -(float)(4*a*c);
    float r1 = (float)(a+ sqrt(d))/2;
    float r2 = (float)(a- sqrt(d))/2;
    printf("%f   %f",r1,r2);
}

void main(){
    roots(4,8,4);
}