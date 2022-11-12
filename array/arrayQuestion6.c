//  Write a program in C to insert New value in the array (sorted list ).


#include<stdio.h>
#include<stdlib.h>

int* insertelement(int arr[],int n){
    int element;
    int i;
    int *arr1 = (int)(malloc(sizeof(int) * n));
    
    printf("Enter element for insertion: ");
    scanf("%d",&element);
    for(i=0 ;i<n;i++){
        if(arr[i]>element){
            arr1[i]= element;
            break;
        }
        else{
            arr1[i] = arr[i];
        }
    }
    while(i<n){
        arr1[i+1]=arr[i];
        i++;
    }
    return arr1;
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
    int *updatedarray;
    int size;
    printf("Input the number of elements to store in the array:\n ");
    scanf("%d",&size);
    n = array(size);
    updatedarray = insertelement(n,size);
    printf("After Insert the list is :");
    for(int i=0;i<size+1;i++)  
    {  
        printf("%d ", updatedarray[i]);  
        
    } 

}