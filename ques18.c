#include<stdio.h>

void profitLoss(int cp, int sp){
    if(sp>cp){
        printf("Profit  %d",sp-cp);
    }
    else{
        printf("Loss   %d",cp-sp);
    }
}


void main(){
    profitLoss(56,65);
}