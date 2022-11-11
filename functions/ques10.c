#include<stdio.h>

int alpha(char a){
    if(a>64 && a< 91){
        return 1;
    }
    else if( a >96 && 123){
        return 2;
    }
    return 0;
}

void main(){
    char a;
    printf("Enter a char value: ");
    fflush(stdin);
    scanf("%c",&a);
    if(alpha(a)==1){
        printf("UpperCase\n");
    }else if(alpha(a)==2){
        printf("lowerCAse\n");
    }
    else{
        printf("not an alphabet\n");
    }
}