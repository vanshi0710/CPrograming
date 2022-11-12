#include<stdio.h>
#include<stdlib.h>
int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}

void removal(char str[],char letter){
    int size =len(str);
    for(int i = 0;i < size;i++){
        if(str[i]==letter){
            for(int j=i;j<size;j++){
                str[j]=str[j+1];
            }
            break;
        }
    }
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
    printf("Enter Letter for Removal: ");
    scanf("%c",&letter); 
    removal(str,letter);
    puts(str);
    
    
}