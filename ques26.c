#include<stdio.h>


float grossSalary(int basic){
    float hra , da;
    if(basic <=10000){
         hra = (float)basic * 0.2;
        da = (float)basic * 0.8;
    }
    else if(basic <=10000){
        hra = (float)basic * 0.25;
        da = (float)basic * 0.9;
    }
    else{
        
        hra = (float)basic * 0.3;
        da = (float)basic * 0.95;
    }
    return basic + hra + da;
}

void main(){
    printf("%.3f",grossSalary(12000));
}