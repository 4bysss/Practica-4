#include <stdio.h>
#include <string.h>
#define MAX 1200
void reverse(char *str);
int main(){
	char str [MAX];
	gets(str);
	reverse(str);
	return 0;}
//void reverse(char *str)
//precondition, no more than 100 charachters
//postcondition reverses the string
void reverse(char *str){
	char aux[MAX];
	int i,limit;
	limit=strlen(str);
	for(i=0;i<limit;i++){
		aux[limit-i-1]=str[i];
	}
	strcpy(str,aux);
	printf("%s",str);
}
