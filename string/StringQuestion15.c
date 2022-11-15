#include <stdio.h>
#include <string.h>
#include"header.h"
#include<stdlib.h>

char* printReverse(char str[])
{
	int length = len(str);
	char *str2 = (char*)(malloc(length*sizeof(char)));
	int j;
	int i;
	int k =0;
	// printf("%s",str);
	for (i = length - 1; i >= 0; i--) {
		// printf("%c\n",str[i]);
		if (str[i] == 32) {
			j=i+1;
			while(str[j]!=32 && str[j]!=0){
				str2[k]=str[j];
				k++;
				j++;
			}
			str2[k]=' ';
			k++;
		}
		
	}
	i=0;
	while(str[i]!=32){
		str2[k]=str[i];
		i++;
		k++;
	}
	str2[k]=0;

	return str2;
}

int main()
{
	char str[] = "This is the program to reverse words in a sentence";
	char *str2=printReverse(str);
	puts(str2);
	return 0;
}