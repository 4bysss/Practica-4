#include <stdio.h>
#include <string.h>
#define MAX 101
typedef struct data{
	char english[40];
	char spanish[40];
}dictionary;
void translator (dictionary trans[],int *maxx);
void d_collector(dictionary trans[],int *maxx);
int main(){
	int maxx;
	dictionary trans[MAX];
	printf("How many word you want to store?");
	scanf("%i",&maxx);
	getchar();
	d_collector(trans,&maxx);
	translator(trans,&maxx);
	return 0;
}
//void d_collector (dictionary trans[],*maxx);
//precondition maximum 100 words;
//poscondition, stores the words like a dictionary
void d_collector (dictionary trans[],int *maxx){
	int i;
	for(i=0;i<*maxx;i++){
		printf("Give me the english word\n");
		gets(trans[i].english);
		printf("Now give me the spanish word\n");
		gets(trans[i].spanish);
	}
}
//void translator (dictionary trans[])
//precondition max 40 character
//postcondition
void translator(dictionary trans[],int *maxx){
	int i,position,found;
	char word[40];
	char finish[]="end";
	do{
		found=1;
		printf("What word do you want to transalate?");
		gets(word);
		for(i=0;i<*maxx+1&&found!=0;i++){
			found=strcmp(word,trans[i].english);
		}
		if(found!=0&&strcmp(word,finish)!=0){
			printf("WORD NOT STORED\nTRY AGAIN\n");
		}
		else if(strcmp(word,finish)!=0) {
			printf("%s in Spanish is %s\n",word,trans[i-1].spanish);
		}
	}while(strcmp(word,finish)!=0);
}






