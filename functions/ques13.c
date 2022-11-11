#include<stdio.h>

int noOfNotes(int amount , int note){
    int num = amount/note;
    if(amount % note != 0){
        num++;
    }
    return num;
}


void main(){
    int notes[]={10,20,50,100,200,500,2000};
    int amount=0;
    int n;
    printf("Enter amount: ");
    fflush(stdin);
    scanf("%d",&amount);
    printf("%d",amount);
    for(int i = 0 ; i<7;i++){
        n =noOfNotes(amount,notes[i]);
        printf("Number of %d notes required are %d\n",notes[i],n);
    }

}