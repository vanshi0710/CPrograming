//  Write a program in C to count a total number of duplicate elements in an array.

#include<stdio.h>
#include<stdlib.h>

int dublicate(int size){
    int* arr = (int*)(malloc(sizeof(int) * size));
    int count=0;
    int flag;
    printf("Enter the elements in an array : ");  
    for(int i=0;i<size;i++){  
        scanf("%d", &arr[i]);  
    }
    for(int i =0 ; i<size ;i++){
        flag =0;
        for(int j =0;j<i;j++){
            if(arr[i]==arr[j]){
                flag =1;
                break;
            }
        }
        if(flag==0){
           for(int j =i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
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