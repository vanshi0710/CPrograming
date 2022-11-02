#include<stdio.h>

float bill(int units){
    float unit = (float)units;
     float bill;
    if(unit <= 50){
        bill =  unit* 0.5;

    }
    else if(unit <=150){
        bill = 25 + (unit-50)*0.75;

    }
    else if(unit <=250){
        bill = 100 + (unit-150)*1.2;
        
    }
    else{
        bill  = 220 + (unit-250)*1.5;
    }
    bill = bill + bill*0.2;
    return bill;

}


void main(){
    int units;
    float b;
    printf("Enter number of units used : ");
    
    scanf("%d",&units);
    printf("Your bill is  %f",bill(units););
}