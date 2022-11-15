#include<stdio.h>
#include<stdlib.h>
int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}
void startTrim(char str[]){
    int i=0;
    int size=len(str);
    while(str[i]==' '){
        int j=0;
        while(j<size){
            str[j]=str[j+1];
            j++;
        }
        str[size-i]=' ';
    }
}
void main(){
    char str[]="           hello everyone.";
    puts(str);
    startTrim(str);
    puts(str);
}