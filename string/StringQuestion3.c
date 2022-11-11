#include<stdio.h>
#include<stdlib.h>
// char* inputString(){
//     char *string ;
//     int n;
//     printf("Enter size of string: ");
//     scanf("%d",&n);
//     string= (char*)(malloc(n*sizeof(char)));
//     printf("Enter string:");
//     fflush(stdin);
//     gets(string);
//     return string;

// }

int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}

char* strConcat(char str1[], char str2[]){
    int i=0,j=0;
    char *str3 = (char*)(malloc((len(str1)+len(str2))*sizeof(char)));
    while(str1[i]!=0){
        str3[i]=str1[i];
        i++;
    }
    do{
        str3[i]=str2[j];
        i++;j++;
    }while(str2[j]!=0);
    return str3;
}
void main(){
    char *str1 = inputString();
    char *str2= inputString();
    char *str3=strConcat(str1,str2);
    puts(str3);
}


// void main(){
//     char str1[]="Vanshika ";
//     char str2[]="chawla";
//     char *str3=strConcat(str1,str2);
//     puts(str3);
// }