#include<stdio.h>
#include<math.h>

void roots(int a, int b, int c){
    int d = pow(b,2) -(4*a*c);
    float r1 = (a+ sqrt(d));
    float r2 = (a- sqrt(d));
    printf("%f   %f",r1,r2);
}

void main(){
    roots(1,2,1);
}