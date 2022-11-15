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
    int j;
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
                    
                while(str[i]!=' '){
                    j=i;
                    while(str[j]!=0){

                        str[j]=str[j+1];
                        j++;
                    }
                   
                }
                break;
            }
        }
        
    }
}
void main(){
    char str[]="this is prog the program to find the program word in a line of string.";
    char word[] = "program";
    searchWord(str,word);
    puts(str);
}