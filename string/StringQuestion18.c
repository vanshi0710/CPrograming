#include<stdio.h>
#include<stdlib.h>
int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}

void occurance(char str[],char letter){
    int size =len(str);
    for(int i = 0;i <size;i++){
        if(str[i]==letter){
            printf("%d ",i);
        }
    }
}
void main(){
    char *str ;
    int size;
    char letter;
    int flag;
    printf("Enter size of string: ");
    scanf("%d",&size);
    str = (char*)(malloc(size*sizeof(char)));
    puts("Enter String:");
    fflush(stdin);
    gets(str);
    printf("Enter Letter for searching: ");
    scanf("%c",&letter); 
    occurance(str,letter);
    
    
}