#include<stdio.h>


int alpha(char a){
    if((a>64 && a< 91) || (a >96 && 123)){
        return 1;
    }
    return 0;
}

int digit(char a){
    if(a>47 && a< 58){
        return 1;
    }
    return 0;
}

void main(){
    char a ;
    printf("Enter a char value: ");
    fflush(stdin);
    scanf("%c",&a);
    if(alpha(a)){
        printf("Alphabet");
    }else if(digit(a)){
        printf("Digit");
    }
    else{
        printf("Special char");
    }
}

