#include <stdio.h>
#include <string.h>
#define MAX 100
int count(char *str,char c);
int main(){
	int number;
	char str[MAX];
	char c='c';
	fgets(str,MAX,stdin);
	number=count (str, c);
	printf("%i",number);
	return 0;
}
//int count (char *str, char c)
//precondition none 
//postcondition, reads the number of c and returns it as a integer
int count(char *str, char c){
	int counter,lenght,i;
	counter=0;
	lenght=strlen(str);
	for(i=0;i<lenght;i++){
		if(str[i]==c){
			counter++;
		}
	}
	return counter;}
