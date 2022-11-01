#include<stdio.h>

int isdivisible(int a){
    if(a % 5 == 0 && a % 11 == 0){
        return 1;
    }
    return 0;
}
void main(){
    if(isdivisible(55)){
        printf("yes");

    }
    else{
        printf("No");
    }
}