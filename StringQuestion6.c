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
        if(str[i]<123 && str[i]>96){
            str[i]=str[i]-32;
        }
        i++;
    }
}
void main(){
    char str[] ="This is The ProGram To cONVErt STRIng TO UpPer Case";
    puts(str);
    toLower(str);
    puts(str);
}