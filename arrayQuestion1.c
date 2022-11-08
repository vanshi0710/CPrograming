#include <stdio.h>  
#include<stdlib.h>
void swap(int arr[],int a,int b){
    int c = arr[a];
    arr[a]=arr[b] ;
    arr[b] = c;
}
int * revarray(int n)  
{   
     int* arr = (int*)(malloc(sizeof(int) * n));
 
    printf("Enter the elements in an array : ");  
    for(int i=0;i<n;i++)  
    {  
        scanf("%d", &arr[i]);  
    }
    
    printf("The values store into the array are :");
    for(int i=0;i<n;i++)  
    {  
        printf("%d ", arr[i]);  
    }  
    for(int i =0;i<n/2;i++){
       swap(arr,i,n-i-1);
    } 

    return arr;  
}  
int main()  
{  
  int *n;  
  int num;
  printf("Input the number of elements to store in the array: ");
  scanf("%d",&num);
  n=revarray(num);  
  printf("\nThe values store into the array in reverse are :");  
  for(int i=0;i<num;i++)  
    {  
        printf("%d ", n[i]);  
    }  
    return 0;  
}  