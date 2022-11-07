#include <stdio.h>  
#include<stdlib.h>
int * revarray(int n)  
{   
    int arr[n];
     int* arr1 = (int*)(malloc(sizeof(int) * n));
 
    printf("Enter the elements in an array : ");  
    for(int i=0;i<n;i++)  
    {  
        scanf("%d", &arr[i]);  
    }
    for(int i =0;i<n;i++){
        arr1[i] = arr[n-i-1];
    } 
    printf("The values store into the array are :");
    for(int i=0;i<n;i++)  
    {  
        printf("%d ", arr[i]);  
    }  

    return arr1;  
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