#include<stdio.h>
#include<stdlib.h>
int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}

void removal(char str[]){
    int size =len(str);
    for(int i = 0;i < size;i++){
        for(int j=size-1;j>i;j--){
            if(str[i]==str[j]){
                for(int k=j;k<size;k++){
                    str[k]=str[k+1];
                }
            }
        }
    }
}
void main(){
    char *str ;
    int size;
    printf("Enter size of string: ");
    scanf("%d",&size);
    str = (char*)(malloc(size*sizeof(char)));
    puts("Enter String:");
    fflush(stdin);
    gets(str);
    removal(str);
    puts(str);
    
    
}