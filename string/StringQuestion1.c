// Write a C program to find length of a string.
#include<stdio.h>

int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}


void main(){
    char arr[50];
    puts("Enter a String");
    gets(arr);
    int l = len(arr);
    printf("%d",l);
}