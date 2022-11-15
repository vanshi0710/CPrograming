#include<stdio.h>
#include<stdlib.h>
int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}
void endTrim(char str[]){
    int size=len(str);
    int i =size-1;
    while(str[i]==' '){
        i--;
    }
    str[i+1]='\0';

}
void main(){
    char str[]="hello everyone.          ";
    printf("%s",str);
    printf(",\n");
    endTrim(str);
    printf("%s",str);
    printf(",\n");
}