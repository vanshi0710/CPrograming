#include<stdio.h>
#include<math.h>

void roots(int a, int b, int c){
    float d = (float)(b*b) -(float)(4*a*c);
    float r1 = (float)((-b) + sqrt(d))/(2*a);
    float r2 = (float)( (-b) - sqrt(d))/(2*a);
    printf("%f   %f",r1,r2);
}


int main(){
    roots(4,8,4);
    return 0;
}
