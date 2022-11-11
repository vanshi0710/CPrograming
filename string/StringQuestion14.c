#include<stdio.h>
#include<stdlib.h>
int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}

int palindrome(char str[]){
    int size = len(str);
    int i=0;
    while(i<size/2){
        if(str[i]!=str[size-i-1]){
            return 0;
        }
        i++;
    }
    return 1;
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
    if(palindrome(str)){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
}