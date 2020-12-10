#include <stdio.h>
#include <string.h>
#define MAX 200
void spaceless(char *str);
void inverter(char *str,char *inverted);
int main(){
	char str[MAX];
	char inverted[MAX];
	fgets(str,MAX,stdin);
	spaceless(str);
	printf("%s\n",str);
	inverter(str,inverted);
	printf("%s\n",inverted);
	if(strcmp(str,inverted)==0){
		printf("You have a palindronme");
	}
	else{
		printf("Not a palindrome");
	}
	return 0;}
//void spaceless(char *str)
//precondition none
//postcondition eliminates the spaces from the strings
void spaceless(char *str){
	int i,limit,k;
	char aux[MAX];
	k=0;
	limit=strlen(str);
	for(i=0;i<limit;i++){
		if(str[i]!=' '){
			aux[k]=str[i];
			k++;
		}
	}
	strcpy(str,aux);
}
//void inverter (char *str, char *inverted)
//precondition none
//postcondition inverts the string
void inverter ( char *str, char *inverted){
	int i;
	for(i=0;i<strlen(str);i++){
		inverted[strlen(str)-1-i]=str[i];
	}
}

