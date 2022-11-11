#include<stdio.h>
#include<stdlib.h>
char* inputString(int n){
    char *string = (char*)(malloc(n*sizeof(char)));
    printf("Enter a string:");
    fflush(stdin);
    gets(string);
    return string;

}
void strCopy(char arr[],char str[]){
    int i=0;
    
    while(arr[i] != '\0'){
        str[i] = arr[i];
        i++;
    }
}

void main(){
    char* str;
    char* str1;
    int size;
    printf("Enter size of string: ");
    scanf("%d",&size);
    str = inputString(size);
    str1 =(char*)(malloc(size*sizeof(char)));
    puts(str);
    strCopy(str,str1);
    puts(str1);
}
