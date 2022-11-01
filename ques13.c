#include<stdio.h>

int noOfNotes(int amount , int note){
    int num = amount/note;
    if(amount % note != 0){
        num++;
    }
    return num;
}


void main(){
    printf("%d", noOfNotes(10060,500));
}