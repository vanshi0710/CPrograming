#include "header.h"
#include<stdio.h>

void removeSpace(char str[]){
    int i =0;
    int size =len(str);
    while(str[i]!=0){
        if(str[i]==' '&&str[i+1]==' '){
            for(int j=i;j<size;j++){
                str[j]=str[j+1];
            }
            i--;
        }
        i++;
    }
}
void main(){
    char str[]="hello   everryone     .   ";
    puts(str);
    removeSpace(str);
    puts(str);
}