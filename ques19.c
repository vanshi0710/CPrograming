#include<stdio.h>

char grade(float percentage){
    if(percentage>=90){
        return 'A';
    }
    else if(percentage>=80){
        return 'B';
    }
    else if(percentage>=70){
        return 'C';
    }
    else if(percentage>=60){
        return 'D';
    }
    else if(percentage>=40){
        return 'E';
    }
    else{
        return 'F';
    }
}

float percentage(int m[]){
    int sum = m[1] + m[2] + m[3] + m[4] + m[0];
    float per = sum / 5;
    return per;
}

void main(){
    printf("Enter marks of subjects:");
    int m[5] ;
    printf("Phisics : ");
    scanf("%d",&m[0]);
    printf("Chemistry : ");
    scanf("%d",&m[1]);
    printf("Biology: ");
    scanf("%d",&m[2]);
    printf("Mathematics : ");
    scanf("%d",&m[3]);
    printf("Computer : ");
    scanf("%d",&m[4]);
    float per = percentage(m);
    printf("Percentage = %f    Grade =  %c ",per , grade(per));
}