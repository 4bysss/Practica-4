#include <stdio.h>
#include <string.h>
#define MAX 50
int main(){
	int num;
	char string1[MAX];
	char string2[MAX];
	gets(string1);
	gets(string2);
	printf("What option would you like?\n1-Comparison of the strings\n2-Copy the first string over the second\n3-Concatenation of both strings\n4-Lenght of the strings\n");
	scanf("%i",&num);
	switch(num){
		case 1:
			if(strcmp(string1,string2)==0){
				printf("Strings are equal");
			}
			else if(strcmp(string1,string2)<0){
				printf("The first string is smaller than the second");
			}
			else if(strcmp(string1,string2)>0) {
				printf("The First string is greater than the seconf");
			}
		break;
		case 2:
			strcpy(string1,string2);
			printf("%s",string1);
		break;
		case 3:
			strcat(string1,string2);
			printf("%s",string1);
		break;
		case 4:
			printf("The length of the first %i\n and the second %i",strlen(string1),strlen(string2));
		break;
	}
return 0;}

