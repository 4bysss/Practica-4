#include <stdio.h>
#include <string.h>
#define MAX 5000
void compress (char *str1,char *str2);
int main(){
	char str1[MAX];
	char str2[MAX];
	gets(str1);
	gets(str2);
	compress (str1,str2);
	printf("%s\n%s",str1,str2);
	return 0;}
//void compress (char *str1,char *str2)
//precondition none
//postcondition eliminates the character repiteded in both string
void compress (char *str1, char *str2){
	int i,k,j,limit,found;
	char aux1[MAX];
	char aux2[MAX];
	char repited [MAX];
	if(strlen(str1)<=strlen(str2)){
		limit=strlen(str2);
	}
	else{
		limit=strlen(str1);
	}
	j=0;
	for(i=0;i<limit;i++){
		found=0;
		for(k=0;k<limit&&found==0;k++){
			if(str1[i]==str2[k]){
				found=1;
			}
		}
		if(found==0){
			aux1[j]=str1[i];
			j++;
		}
	}
	j=0;
	for(i=0;i<limit;i++){
		found=0;
		for(k=0;k<limit&&found==0;k++){
			if(str1[k]==str2[i]){
				found=1;
			}
		}
		if(found==0){
			aux2[j]=str2[i];
			j++;
		}
	}
	strcpy(str1,aux1);
	strcpy(str2,aux2);
}
