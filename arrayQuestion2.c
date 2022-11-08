//  Write a program in C to find the sum of all elements of the array.
#include <stdio.h>  
#include<stdlib.h>
int sum(int n){
    int arr[n];
    int sum=0;
    printf("Enter the elements in an array : ");  
    for(int i=0;i<n;i++){  
        scanf("%d", &arr[i]);  
        sum = sum + arr[i];
    }
    
    return sum;

}
int main(){  
  int n;  
  int num;
  printf("Input the number of elements to store in the array: ");
  scanf("%d",&num);
  n=sum(num);
  printf("Sum of all elements stored in the array is : %d ",n);  
   
} 