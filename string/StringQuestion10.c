#include<stdio.h>

void digit1AlphaSpecial(char str[]){
    int alpha =0;
    int digit =0;
    int special =0;
    int i=0;
    while(str[i] != 0){
        if((str[i]<123 && str[i]>96) || (str[i]<91 && str[i]>64)){
            alpha++;
        }
        else if(str[i]>47 && str[i]<58){
            digit++;
        }
        else{
            special++;
        }
        i++;
    }
    printf("Alphabet = %d , Digit : %d and Special Character = %d",alpha,digit,special);
    
}
void main(){
    char str[] = "Ajf94mj64*&%*nn$#^dk";
    digit1AlphaSpecial(str);
}