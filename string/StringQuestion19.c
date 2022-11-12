#include<stdio.h>
#include<stdlib.h>
int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}

int occurance(char str[],char letter){
    int size =len(str);
    int count=0;
    for(int i = 0;i < size;i++){
        if(str[i]==letter){
            count++;
        }
    }
    return count;
}
void main(){
    char *str ;
    int size;
    char letter;
    printf("Enter size of string: ");
    scanf("%d",&size);
    str = (char*)(malloc(size*sizeof(char)));
    puts("Enter String:");
    fflush(stdin);
    gets(str);
    printf("Enter Letter for searching: ");
    scanf("%c",&letter); 
    printf("No. of occurance :%d", occurance(str,letter));    
}