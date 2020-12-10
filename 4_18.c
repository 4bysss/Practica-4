#include <stdio.h>
#define MAX 100
void link(char *s1, char *s2);
int main(){
	int i;
	char s1[MAX];
	char s2[MAX];
	gets(s1);
	gets(s2);
	link(s1,s2);
	return 0;
}
//void link(char *s1, char *s2)
//precondition none
//postcondition prints s1 afte s2
void link(char *s1, char *s2){
	printf("%s%s",s2,s1);
}
