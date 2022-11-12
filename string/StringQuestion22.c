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
    int flag;
    for(int i =0 ;i<size;i++){
        count =0;
        flag=0;
        for(int j=0;j<i;j++){
            if(str[j]==str[i]){
                flag=1;
            }
        }
        if(flag==0){
            for(int j=i;j<size;j++){
                if(str[i]==str[j]){
                    count++;
                }
            }
            printf("%c : %d\n",str[i],count);
        }
    }
    return c;

}
void main(){
    char c = maxFrequency("jsidjganjskdnajfa");
    printf("%c",c);
}