#include <stdio.h>
#include <string.h>
#define MAX 30
int length(const char *s);
int main(){
	int digits;
	char s[MAX];
	fgets(s,30,stdin);
	digits=length(s);
	printf("%i",digits);
	return 0;}

int length (const char *s){
	int i;
	for(i=0;i<30&&s[i]!='\0';i++){
		s[i];}
	return i-1;
}

