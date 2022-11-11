#include<stdio.h>
int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}


int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int compare(char str1[],char str2[]){
    int i=0;
    while(i< max(len(str1),len(str2))){
        if(str1[i]>str2[i]){
            return 1;
        }
        if(str1[i]<str2[i]){
            return -1;
        }
        i++;
    }
    return 0;
}

void main(){
    char str[] ="hello";
    char str2[] = "hello";
    int cmp = compare(str,str2);
    if(cmp==0){
        printf("Equal");
    }
    else if(cmp==1){
        printf("str1 is greater");
    }
    
    else if(cmp==1){
        printf("str2 is greater");
    }
}