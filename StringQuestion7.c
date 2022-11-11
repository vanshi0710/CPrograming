#include<stdio.h>
int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}

void toLower(char str[]){
    int i =0;
    while(i<len(str)){
        if(str[i]<91 && str[i]>64){
            str[i]=str[i]+32;
        }
        i++;
    }
}
void main(){
    char str[] ="this is to check the program to convert string tolower case";
    puts(str);
    toLower(str);
    puts(str);
}