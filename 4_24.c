#include <stdio.h>
#include <string.h>
#define MAX 6
void converter(int array[],char string[]);
int main(){
	int i;
	int array[MAX];
	char string[MAX];
	gets(string);
	converter(array,string);
	for(i=0;i<strlen(string);i++){
		printf("%i  ",array[i]);
	}
	return 0;}
//void converter (int array[], char string[])
//precondition max 6 numbers
//converts char to int
void converter (int array[], char string[]){
	int i;
	for(i=0;i<strlen(string);i++){
		array[i]=string[i]-'0';
	}
}
