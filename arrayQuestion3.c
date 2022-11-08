//  Write a program in C to count a total number of duplicate elements in an array.

#include<stdio.h>
#include<stdlib.h>

int dublicate(n){
    int arr[n];
    int count=0;
    printf("Enter the elements in an array : ");  
    for(int i=0;i<n;i++){  
        scanf("%d", &arr[i]);  
    }
    for(int i =0 ; i<n ;i++){
        for(int j =i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
    }
    return count;
}
void main(){
    int n;
    
    int num;
  printf("Input the number of elements to store in the array:\n ");
  scanf("%d",&num);
    n = dublicate(num);
    printf("Total number of duplicate elements found in the array is : %d",n);

}