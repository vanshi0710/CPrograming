#include<stdio.h>

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
void endTrim(char str[]){
    int size=len(str);
    int i =size-1;
    while(str[i]==' '){
        i--;
    }
    str[i+1]='\0';

}

int countWords(char str[]){
    int size = len(str);
    int count=0;
    int i=1;
    while(i<size-1){
        if(str[i] == ' ' && str[i+1] != ' '){
            count++;
        }
        i++;
    }
    return count+1;
}

void main(){
    char str[] ="      this is the       program to count the words in a line      ";
    startTrim(str);
    endTrim(str);
    int count = countWords(str);
    printf("No. of words in the line : %d",count);
}

