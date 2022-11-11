#include<stdio.h>

void vowelConsonant(char str[]){
    int consonant=0;
    int vowel=0;
    int i=0;
    while(str[i] != 0){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vowel++;
        }
        
        else if((str[i]<123 && str[i]>96) || (str[i]<91 && str[i]>64)){
            consonant++;
        }
        i++;
    }
    printf("Vowel = %d And Consonant : %d ",vowel,consonant);
    
}
void main(){
    char str[] = "asdfghjklei";
    vowelConsonant(str);
}