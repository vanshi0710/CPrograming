//  Find the first non-repeating element in a given array arr of N integers.
#include<stdio.h>
#include<stdlib.h>

int firstdublicate(n){
    int arr[n];
    int flag ;
    printf("Enter the elements in an array : ");  
    for(int i=0;i<n;i++){  
        scanf("%d", &arr[i]);  
    }
    for(int i =0 ; i<n ;i++){
        flag =0;
        for(int j = 0;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                flag =1;
                break;
            }
        }
        if(flag==0){
            return arr[i];
        }
    }
    return 0;
}
void main(){
    int n;
    
    int num;
    printf("Input the number of elements to store in the array:\n ");
    scanf("%d",&num);
    n = firstdublicate(num);
    printf("Total number of duplicate elements found in the array is : %d",n);

}