#include<stdio.h>

char grade(float per){
    if(per>90){
        return 'A';
    }
    else if(per>80){
        return 'B';
    }
    else if(per> 70){
        return 'C';
    }
    else if(per>60){
        return 'D';
    }
    else if(per> 40){
        return 'E';
    }
    return 'F';
    

}

float percentage(int m[]){
    int sum =0;
    for(int i =0; i<5;i++){
        sum = sum + m[i];
    }
    return (float)sum/5;
}


void main(){

    int m[5];
    float per;
    printf("Enter marks:\n");

    printf("phisics: ");
    scanf("%d",&m[0]);
    printf("chemistry: ");
    scanf("%d",&m[1]);
    printf("Biology: ");
    scanf("%d",&m[2]);
    printf("Maths: ");
    scanf("%d",&m[3]);
    printf("English: ");
    scanf("%d",&m[4]);
    per = percentage(m);
    printf("percentage : %f  Grade: %c",per,grade(per));
    
}