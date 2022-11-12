#include<stdio.h>
int len(char arr[]){
    int i =0;
    while(arr[i] != 0){
        i++;
    }
    return i;
}

char maxFrequency(char str[]){
    int size = len(str);
    int count;
    int maxCount=0;
    char c=0;
    for(int i =0 ;i<size;i++){
        count =0;
        for(int j=0;j<size;j++){
            if(str[i]==str[j]&&i!=j){
                count++;
            }
        }
        if(count>maxCount){
            maxCount=count;
            c=str[i];
        }
    }
    return c;

}
void main(){
    char c = maxFrequency("jhjhjhjhjhjjgjgjfjdjhh");
    printf("%c",c);
}