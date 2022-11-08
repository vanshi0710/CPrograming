//  Write a program in C to find the maximum and minimum element in an array.
#include<stdio.h>
#include<stdlib.h>

int findmax(int arr[],int size){
    int max=arr[0];
    
    for(int i = 0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int findmin(int arr[],int size){
    int min=arr[0];
    for( int i = 0; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int* array(int n){
    int *arr = (int*)(malloc(sizeof(int) * n));
    printf("Enter elements of array:\n");
    for(int i = 0;i<n ;i++){
        scanf("%d",&arr[i]);
    }
    return arr;
}

void main(){
    int *n;
    int max,min;
    int size;
    printf("Input the number of elements to store in the array:\n ");
    scanf("%d",&size);
    n = array(size);
    min = findmin(n,size);
    max = findmax(n,size);
    printf("Maximum element is : %d\nMinimum element is : %d",max,min);

}


