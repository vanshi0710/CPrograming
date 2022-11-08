// Write a program in C to find the second largest element in an array.


#include<stdio.h>
#include<stdlib.h>

int findMax(int arr[],int size){
    int max=arr[0];
    for( int i = 0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int secondMax(int arr[],int size){
    int secMax = 0;
    int max = findMax(arr,size);
    for(int i = 0 ; i<size;i++){
        if(arr[i]>secMax && arr[i]<max){
            secMax = arr[i];
        }
    }
    return secMax;
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
    int secMax;
    int size;
    printf("Input the number of elements to store in the array:\n ");
    scanf("%d",&size);
    n = array(size);
    secMax = secondMax(n,size);
   
    printf("The Second largest element in the array is %d",secMax);

}