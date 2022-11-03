#include<stdio.h>


//using third variable
// void swap(int *num1 , int *num2){
//     int n;
//     n= *num1;
//     *num1 = *num2;
//     *num2 =n;
// }



// Without using third variable
void swap(int *num1 , int *num2){
    int n;
    *num1= *num1 +*num2;
    *num2 = *num1 -*num2;
    *num1 = *num1 -*num2;
    
}


void main(){
    int *num1 , *num2;
    int n1,n2;
    printf("Enter two numbers: ");
    printf("\nNum 1: ");
    scanf("%d",&n1);
    printf("Num 2: ");
    scanf("%d",&n2);
    num1 = &n1;
    num2 = &n2;
    printf("Before swapping  %d  %d\n",*num1,*num2);
    swap(num1,num2);
    printf("After Swapping  %d  %d",*num1,*num2);
}