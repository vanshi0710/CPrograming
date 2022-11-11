#include<stdio.h>
int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}

void toggleCase(char str[]){
    
    int size =len(str);
    int i=0;
    int flag =0;
    if(str[0]<123 && str[0]>96){
                str[i]=str[i]-32;
            }
    while(i<size){
        if(str[i] == 32){
            flag=1;
        }
        if(flag==1){
            if(str[i+1]<123 && str[i+1]>96){
                str[i+1]=str[i+1]-32;
            }
            flag =0;
        }
        i++;
    }
}
void main(){
    char str[] ="this is the program to convert string to toggle case";
    toggleCase(str);
    puts(str);
}