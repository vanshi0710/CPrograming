#include<stdio.h>
#include<stdlib.h>
int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}
void removal(char str[],char letter1,char letter2){
    int size =len(str);
    for(int i = 0;i < size;i++){
        if(str[i]==letter1){
            str[i]=letter2;
        }
        
    }
}
void main(){
    char *str ;
    int size;
    char letter1;
    char letter2;
    printf("Enter size of string: ");
    scanf("%d",&size);
    str = (char*)(malloc(size*sizeof(char)));
    puts("Enter String:");
    fflush(stdin);
    gets(str);
    printf("Enter Letter for Removal: ");
    scanf("%c",&letter1); 
    fflush(stdin);
    printf("Enter Letter for Insertion: ");
    scanf("%c",&letter2); 
    removal(str,letter1,letter2);
    puts(str);
}