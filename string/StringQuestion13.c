#include<stdio.h>
#include<stdlib.h>
int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}
void swap(char arr[],int a,int b){
    char c = arr[a];
    arr[a]=arr[b] ;
    arr[b] = c;
}
void reverse(char str[]){
    int size = len(str);
    for(int i =0;i<size/2;i++){
       swap(str,i,size-i-1);
    } 
}
void main(){
    int size;
    char *str;
    printf("Enter size of string:");
    scanf("%d",&size);
    str = (char*)(malloc(size*sizeof(char)));
    fflush(stdin);
    puts("Enter String:");
    gets(str);
    reverse(str);
    puts(str);
}