//  Write a program in C to sort elements of the array in descending order.
#include<stdio.h>
#include<stdlib.h>

void swap(int arr[],int a,int b){
    int c = arr[a];
    arr[a]=arr[b] ;
    arr[b] = c;
}



int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int start = low;
    int end = high;
   while(start<end){
    
        while(arr[start]>=pivot){
            
            start++;
        }
        while(arr[end]<pivot){
            
            end--;
        }  
        if(start<end){
            swap(arr,start,end);
        }
    }
    swap(arr,low,end);
    return end;
   
}
void quicksort(int arr[],int low,int high){
    int loc;
    if(low<high){
        loc = partition(arr,low,high);
        quicksort(arr,low,loc);
        quicksort(arr,loc+1,high);
    }
    
}

int* array(int n){
    int *arr = (int*)(malloc(sizeof(int) * n));
    printf("Enter elements of array:\n");
    for(int i = 0;i<n ;i++){
        scanf("%d",&arr[i]);
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
    
  quicksort(arr,0,size);
  printf("\nElements of array in sorted ascending order: ");  
  for(int i=0;i<size;i++)  
    {  
        printf("%d ", arr[i]);  
    }  
    return 0;  
}  