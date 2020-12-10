#include <stdio.h>
#include <string.h>
#define MAX 100
void majority(char *string,char *letter,int *count);
int main(){
	char string[MAX];
	int count=0;
	char letter=' ';
	fgets(string,MAX,stdin);
	majority(string,&letter,&count);
	return 0;}
//void majority(char *string, char *dom, int *count)
//precondition none
//postcondition looks for the character that appears the most times and counts how many times it appears
void majority(char *string, char *letter, int *count){
	int limit,i,k,times;
	times=0;
	limit=strlen(string);
	for(i=0;i<limit;i++){
		times=0;
		for(k=i;k<limit;k++){
			if(string[i]==string[k]){
				times++;
			}
		}
		if(*count<times){
			*count=times;
			*letter=string[i];
		}
	}
	printf("The character that appear the most is %c and it appears %i times",*letter ,*count);
}
		




