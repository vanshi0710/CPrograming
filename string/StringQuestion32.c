#include<stdio.h>
#include<stdlib.h>
int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}
void searchWord(char str[],char word[]){
    int size =len(str);
    int wordsize =len(word);
    int flag;
    for(int i = 0;i < size;i++){
        if(str[i]==word[0]){
            flag=0;
            for(int j =0;j<wordsize;j++){
                if(str[i+j]!=word[j]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("%d ",i);
            }
        }
        
    }
}
void main(){
    char str[]="this is program the program to find the word program in a line of string.";
    char word[] = "program";
    searchWord(str,word);
}