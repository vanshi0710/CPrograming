#include<stdio.h>
#include<stdlib.h>

int* array(int n){
    int *arr = (int*)(malloc(sizeof(int) * n));
    printf("Enter elements of array:\n");
    for(int i = 0;i<n ;i++){
        scanf("%d",&arr[i]);
    }
    return arr;
}



int* sort(int arr[],int size){
    int temp;
    for(int i = 0 ; i<size-1;i++){
        for(int j = 0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}

int main()  
{  
  int *arr,*sortedarray;  
  int size;
  printf("Input the number of elements to store in the array: ");
  scanf("%d",&size);
  arr=array(size);  
   sortedarray=sort(arr,size);
  printf("\nElements of array in sorted ascending order: ");  
  for(int i=0;i<size;i++)  
    {  
        printf("%d ", sortedarray[i]);  
    }  
    return 0;  
}  