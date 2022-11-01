#include<stdio.h>

int leapYear(int year){
    if(year %4 ==0){
        if(year %100==0){
            if( year % 400==0){
                return 1;
            }
        }else{
            return 1;
        }
    }
    return 0;
}

void main(){
    if(leapYear(3004)){
        printf("leap year");
    }
    else{
        printf("Not a leap year");
    }
}