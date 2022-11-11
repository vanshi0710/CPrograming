#include<stdio.h>
#include <ctype.h>

void isVowel(char a){
    char b = tolower(a);
    if(b== 'a' || b =='e'||b=='i' || b=='o'|| b=='u'){
        printf("Vowel\n");
    }
    else{
        printf("Consonent\n");
    }

}
void main(){
    isVowel('h');
    isVowel('A');
}