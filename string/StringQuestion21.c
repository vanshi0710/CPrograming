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
    int minCount=size;
    char c=0;
    for(int i =0 ;i<size;i++){
        count =0;
        for(int j=0;j<size;j++){
            if(str[i]==str[j]&&i!=j){
                count++;
            }
        }
        if(count<minCount){
            minCount=count;
            c=str[i];
        }
    }
    return c;

}
void main(){
    char c = maxFrequency("jhjhjhjhjhjjgjgjfjdjhh");
    printf("%c",c);
}